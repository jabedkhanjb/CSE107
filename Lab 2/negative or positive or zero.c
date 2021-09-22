#include <stdio.h>
int main()
{
    printf("************************\n");
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
    {
       printf("You entered a negative number.");
    }
    else if (num > 0)
       {
           printf("You entered a positive number.");
       }
    else
        printf("You entered Zero");
     printf("\n\n************************\n");
    return 0;
}

