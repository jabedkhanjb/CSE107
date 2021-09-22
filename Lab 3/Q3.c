#include<stdio.h>
int main()
{

    printf("*******************************************************\n");

    int i,n;
    int sum_of_series = 0;

       printf("C Program to print sum of series 2 + 4 + 6 + .... + n : \n\n");

       printf("Enter an even number n : ");
       scanf("%d",&n);
       for ( i = 1 ; i <= n ; i++ )
       {
           i = i+1;
          if(n!=i)
          {
             printf(" %d +",i);
          }
          else
            printf(" %d ",i);
          sum_of_series = sum_of_series + i;
       }
        printf(" = %d",sum_of_series);

        printf("\n\n*******************************************************\n");
    printf("C Program to print sum of series 3 + 6 + 9 + .... + n : \n\n ");

    int sum_of_seriestwo;
        printf("Enter an odd number n : ");
       scanf("%d",&n);
       for ( i = 1 ; i <= n ; i++ )
       {
           i = i+2;
          if(n!=i)
          {
             printf(" %d +",i);
          }
          else
            printf(" %d ",i);
          sum_of_seriestwo = sum_of_seriestwo + i;
       }
        printf(" = %d",sum_of_seriestwo);

    printf("\n\n*******************************************************\n");

    printf("C Program to print sum of the series 1^2 + 2^2 + 3^2 + … + n^2 = ? \n\n");

	int a,b;
	int sum=0;
	printf("Enter the max values of series: ");
	scanf("%d",&a);
	sum = (a * (a + 1) * (2 * a + 1 )) / 6;
	printf("Sum of the series : ");
	for (b =1;b<=a;b++)
        {
		if (b != a)
        printf("%d^2 + ",b); else
        printf("%d^2 = %d ",b,sum);
        }

    printf("\n\n*******************************************************\n");

    printf("C Program to print sum of the series 1^2 + 3^2 + 5^2 + … + n^2 = ? \n\n");

    printf("***************jabedkhanjb**************");

    printf("\n\n*******************************************************\n");

    return 0;
}

