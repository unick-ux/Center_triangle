
#include <stdio.h>

void printPyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int spaces = n - i;
        int stars = 2 * i - 1;

        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }

        for (int j = 0; j < stars; j++)
        {
            printf("*");
        }

        printf("\n");
    }
}

int main()
{
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive number.\n");
        return 1;
    }

    printPyramid(n);

    return 0;
}

