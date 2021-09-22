#include <stdio.h>
int main(){

    printf("*****************************\n\n");

    float radius, volume,pi=3.1416;
    printf("Enter radius of Sphere\n");
    scanf("%f", &radius);
    volume = (4.0/3)*pi*radius*radius*radius;
    printf("Volume of Sphere : %0.f\n", volume);

    printf("\n*****************************\n");
    return 0;
}
