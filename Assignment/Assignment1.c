#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Product {
    int product_id;
    char product_name[50];
    float price;
    int quantity;
};

void writeProducts(const char *filename, int numProducts);
void appendProducts(const char *filename, int numProducts);
void readProducts(const char *filename);
void modifyProduct(const char *filename);

int main() {
    const char *filename = "products.bin";
    int choice, numProducts;

    do {
        printf("\n-- Product Management System --\n");
        printf("1. Write Products (Overwrite)\n");
        printf("2. Append Products\n");
        printf("3. Read Products\n");
        printf("4. Modify Product\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while(getchar() != '\n'); 
            continue;
        }

        switch (choice) {
            case 1:
                printf("Enter the number of products to write: ");
                scanf("%d", &numProducts);
                writeProducts(filename, numProducts);
                break;
            case 2:
                printf("Enter the number of products to append: ");
                scanf("%d", &numProducts);
                appendProducts(filename, numProducts);
                break;
            case 3:
                readProducts(filename);
                break;
            case 4:
                modifyProduct(filename);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

void writeProducts(const char *filename, int numProducts) {
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return;
    }

    struct Product p;
    for (int i = 0; i < numProducts; i++) {
        printf("Enter details for product %d:\n", i + 1);
        printf("Product ID: "); scanf("%d", &p.product_id);
        getchar(); 
        printf("Product Name: "); fgets(p.product_name, 50, stdin);
        p.product_name[strcspn(p.product_name, "\n")] = 0; 
        printf("Price: "); scanf("%f", &p.price);
        printf("Quantity: "); scanf("%d", &p.quantity);

        fwrite(&p, sizeof(struct Product), 1, file);
    }

    fclose(file);
    printf("Products have been written successfully.\n");
}

void appendProducts(const char *filename, int numProducts) {
    FILE *file = fopen(filename, "ab");
    if (file == NULL) {
        printf("Error opening file for appending!\n");
        return;
    }

    struct Product p;
    for (int i = 0; i < numProducts; i++) {
        printf("Enter details for product %d:\n", i + 1);
        printf("Product ID: "); scanf("%d", &p.product_id);
        getchar();
        printf("Product Name: "); fgets(p.product_name, 50, stdin);
        p.product_name[strcspn(p.product_name, "\n")] = 0;
        printf("Price: "); scanf("%f", &p.price);
        printf("Quantity: ");
			if (scanf("%d", &p.quantity) != 1) {
    	printf("Invalid input! Please enter a number.\n");
    		while(getchar() != '\n'); // Lệnh này giúp xóa sạch các ký tự lỗi như "High"
}

        fwrite(&p, sizeof(struct Product), 1, file);
    }

    fclose(file);
    printf("Products have been appended successfully.\n");
}

void readProducts(const char *filename) {
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        printf("No data found or file error.\n");
        return;
    }

    struct Product p;
    printf("\nReading products from the file:\n");
    printf("-----------------------------------------------------\n");
    printf("%-15s %-20s %-10s %-10s\n", "Product ID", "Product Name", "Price", "Quantity");
    printf("-----------------------------------------------------\n");

    while (fread(&p, sizeof(struct Product), 1, file)) {
        printf("%-15d %-20s %-10.2f %-10d\n", p.product_id, p.product_name, p.price, p.quantity);
    }
    printf("-----------------------------------------------------\n");

    fclose(file);
}

void modifyProduct(const char *filename) {
    FILE *file = fopen(filename, "rb+"); 
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    int searchId, found = 0;
    printf("Enter the Product ID to modify: ");
    scanf("%d", &searchId);

    struct Product p;
    while (fread(&p, sizeof(struct Product), 1, file)) {
        if (p.product_id == searchId) {
            found = 1;
            printf("Product found. Enter new details:\n");
            
            getchar(); 
            printf("New Product Name: "); fgets(p.product_name, 50, stdin);
            p.product_name[strcspn(p.product_name, "\n")] = 0;
            printf("New Price: "); scanf("%f", &p.price);
            printf("New Quantity: "); scanf("%d", &p.quantity);

            fseek(file, -(long)sizeof(struct Product), SEEK_CUR);
            fwrite(&p, sizeof(struct Product), 1, file);
            printf("Product updated successfully.\n");
            break;
        }	
    }

    if (!found) {
        printf("Product with ID %d not found.\n", searchId);
    }

    fclose(file);
}