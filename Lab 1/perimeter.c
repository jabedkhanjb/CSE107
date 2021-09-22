#include <stdio.h>
int main() {

    printf("*****************************\n\n");
    int radius;
    float area, perimeter;
    radius = 6;
    perimeter = 2*3.14*radius;
    printf("Perimeter of the Circle = %.2f inches\n", perimeter);
    area = 3.14*radius*radius;
	printf("Area of the Circle = %.2f square inches\n", area);
    printf("\n*****************************\n");

return(0);
}
