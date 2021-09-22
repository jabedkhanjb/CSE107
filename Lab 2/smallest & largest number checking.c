#include <stdio.h>
int main()
{
    printf("*******************************************\n");
    int num1,num2,num3;
    printf("Enter three numbers\n");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1<num2 && num1<num3)
        {
            printf("\n%d is the smallest",num1);
        }
    else if(num2<num3)
        {
            printf("\n%d is the smallest",num2);
        }
    else
        {
            printf("\n%d is the smallest",num3);
        }
    if(num1>num2 && num1>num3)
        {
            printf("\n%d is largest",num1);
        }
    else if(num2>num3)
        {
            printf("\n%d is largest",num2);
        }
    else
        {
            printf("\n%d is largest",num3);
        }
    printf("\n\n*******************************************\n");

    return 0;
}
