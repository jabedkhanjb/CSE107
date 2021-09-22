#include<stdio.h>
int main()
{
    int number, sum=0, i, n, count=0, num;
    printf("Enter a Number: "); //we are taking n digits number as input
    scanf("%d", &number);
    num = number;
    while(num!=0)
    {
        num /= 10;
        count += 1;
    }
    for(i=0;i<count;i++)    //i=0 to i=count-1 (length(number))
    {
        n = number % 10;
        number = number / 10;
        sum = sum + n;
    }

    printf("Sum: %d", sum);
    return 0;

}
