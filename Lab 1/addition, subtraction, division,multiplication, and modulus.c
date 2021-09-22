#include<stdio.h>
int main()
{
    printf("*************************************\n\n");
    int a,b,add,sub,multiple,div,modulus;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Enter another number : ");
    scanf("%d",&b);
    add=a+b;
    printf("\nAddition between two numbers : %d\n",add);
    sub=a-b;
    printf("Subtraction between two numbers : %d\n",sub);
    multiple=a*b;
    printf("Multiplication between two numbers : %d\n",multiple);
    div=a/b;
    printf("Division of this two numbers : %d\n",div);
    modulus=a%b;
    printf("Modulus from this two numbers : %d\n",modulus);

    printf("\n*************************************\n");
    return 0;
}
