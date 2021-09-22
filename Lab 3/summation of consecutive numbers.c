#include <stdio.h>
int main()
{
    printf("**********************************\n");
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        {
            printf("%d\n",i);
            sum = sum + i;
        }
    printf("\nSum = %d", sum);

    printf("\n\n**********************************\n");
    return 0;
}


