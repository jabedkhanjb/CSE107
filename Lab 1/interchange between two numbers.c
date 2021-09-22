#include<Stdio.h>
int main()
{
    int C, D, T;
     printf("Enter the value of C: ");
     scanf("%d", &C);

     printf("Enter the value of D: ");
     scanf("%d", &D);

     C = C+D; //assume, c=30, d=20
     D = C-D; //d=10, c=30
     C = C-D; //c=20


     printf("\n The value of C: %d", C);
     printf("\n The value of D: %d", D);
     getch();
}
