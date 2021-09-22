#include<stdio.h>
int main()
{
    int a, b, c, x;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    c = 1;
    x = b;
    while(b!=0)
    {
        c = c * a;
        b = b - 1;
    }
    printf("%d raised to the power %d: %d",a,x,c);
    return 0;
}
