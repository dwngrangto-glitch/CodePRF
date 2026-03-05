#include <stdio.h>
#define MAX 100
// print Aray
void printArray(int a[], int n)
{
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
}
// Add a value
void addValue(int a[], int *n)
{
    if(*n >= MAX)
    {
        printf("Array is full!\n");
        return;
    }
    int x;
    printf("Enter value: ");
    scanf("%d", &x);

    a[*n] = x;
    (*n)++;
}
// Search a value
void searchValue(int a[], int n)
{
    int x, found = 0;
    printf("Enter value to search: ");
    scanf("%d", &x);
    for(int i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            printf("Found at position %d\n", i);
            found = 1;
        }
    }
    if(!found)
        printf("Value not found\n");
}

// Remove the first existence of a value
void removeFirst(int a[], int *n)
{
    int x;
    printf("Enter value to remove: ");
    scanf("%d", &x);

    for(int i = 0; i < *n; i++)
    {
        if(a[i] == x)
        {
            for(int j = i; j < *n - 1; j++)
                a[j] = a[j + 1];

            (*n)--;
            printf("Removed first occurrence\n");
            return;
        }
    }

    printf("Value not found\n");
}

// Remove all existences of a value
void removeAll(int a[], int *n)
{
    int x;
    printf("Enter value to remove: ");
    scanf("%d", &x);

    int i = 0;
    while(i < *n)
    {
        if(a[i] == x)
        {
            for(int j = i; j < *n - 1; j++)
                a[j] = a[j + 1];

            (*n)--;
        }
        else
            i++;
    }
}

// Print out the array in ascending order
void printAscending(int a[], int n)
{
    int b[MAX];

    for(int i = 0; i < n; i++)
        b[i] = a[i];

    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
            if(b[i] > b[j])
            {
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }

    printArray(b, n);
}

// Print out the array in descending order
void printDescending(int a[], int n)
{
    int b[MAX];

    for(int i = 0; i < n; i++)
        b[i] = a[i];

    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
            if(b[i] < b[j])
            {
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }

    printArray(b, n);
}

int main()
{
    int a[MAX];
    int n = 0;
    int choice;

    do
    {
        printf("\n------ MENU ------\n");
        printf("1. Add value\n");
        printf("2. Search value\n");
        printf("3. Remove first occurrence\n");
        printf("4. Remove all occurrences\n");
        printf("5. Print array\n");
        printf("6. Print ascending\n");
        printf("7. Print descending\n");
        printf("0. Quit\n");

        printf("Your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: addValue(a, &n); break;
            case 2: searchValue(a, n); break;
            case 3: removeFirst(a, &n); break;
            case 4: removeAll(a, &n); break;
            case 5: printArray(a, n); break;
            case 6: printAscending(a, n); break;
            case 7: printDescending(a, n); break;
        }

    } while(choice != 0);

    return 0;
}