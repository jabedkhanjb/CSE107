#include<stdio.h>
int main()
{

    printf("**********************************\n");

    int i,n;
    int sum_of_series = 0;

       printf("\n C Program to print sum of series 2 + 4 + 6 + .... + n : \n\n ");

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

    printf("\n\n C Program to print sum of series 3 + 6 + 9 + .... + n : \n\n ");

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
    printf("\n\n**********************************\n");
    return 0;
}
