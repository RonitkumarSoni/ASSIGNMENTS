#include <stdio.h>
int main()
{

    // Centered Hollow Triangle (Stars)

    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    int a = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf(" ");
        }
        printf("*");

        if (i >= 2 && i < n)
        {
            for (int k = 1; k <= a; k++)
            {
                printf(" ");
            }
            a = a + 2;
            printf("*");
        }
        if (i == n)
        {
            for (int l = 2; l < 2 * n; l++)
            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}