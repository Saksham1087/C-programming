#include <stdio.h>

int main() {
    int sides;
    float l, b, area;

    printf("Enter number of sides of the shape (0 for Circle): ");
    scanf("%d", &sides);

    if (sides == 0) {
        float radius;
        printf("It is a Circle.\n");
        printf("Enter radius: ");
        scanf("%f", &radius);
        area = 3.1416 * radius * radius;
        printf("Area = %.2f\n", area);
    } 
    else if (sides == 3) {
        printf("It is a Triangle.\n");
        printf("Enter base and height: ");
        scanf("%f %f", &l, &b);
        area = 0.5 * l * b;
        printf("Area = %.2f\n", area);
    } 
    else if (sides == 4) {
        printf("It is a Quadrilateral (Square/Rectangle).\n");
        printf("Enter length and breadth: ");
        scanf("%f %f", &l, &b);
        area = l * b;
        if (l == b)
            printf("It is a Square.\n");
        else
            printf("It is a Rectangle.\n");
        printf("Area = %.2f\n", area);
    } 
    else if (sides == 5) {
        printf("It is a Pentagon.\n");
        printf("Enter length and breadth: ");
        scanf("%f %f", &l, &b);
        area = l * b;
        printf("Area = %.2f\n", area);
    } 
    else if (sides == 6) {
        printf("It is a Hexagon.\n");
        printf("Enter length and breadth: ");
        scanf("%f %f", &l, &b);
        area = l * b;
        printf("Area = %.2f\n", area);
    } 
    else if (sides == 7) {
        printf("It is a Heptagon.\n");
        printf("Enter length and breadth: ");
        scanf("%f %f", &l, &b);
        area = l * b;
        printf("Area = %.2f\n", area);
    } 
    else if (sides == 8) {
        printf("It is an Octagon.\n");
        printf("Enter length and breadth: ");
        scanf("%f %f", &l, &b);
        area = l * b;
        printf("Area = %.2f\n", area);
    } 
    else {
        printf("Shape not supported in this program.\n");
    }

    return 0;
}