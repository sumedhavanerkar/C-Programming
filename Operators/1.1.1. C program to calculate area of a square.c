#include <stdio.h>

int main() {
    int side, area;

    // Input the side of the square
    printf("Side: ");
    scanf("%d", &side);

    // Calculate the area
    area = side * side;

    //Output the result
    printf("Area of square: %.d\n", area);

    return 0;
}