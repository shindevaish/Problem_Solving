/*Write a C program to find diameter, circumference and area of circle using function*/

#include <stdio.h>

double Diameter(double radius) {
    return 2 * radius;
}

double Circumference(double radius) {
    float pie=3.14;
    return 2 * pie * radius;
}

double Area(double radius) {
    float pie=3.14;
    return pie * radius * radius;
}

int main() {
    double radius;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    double diameter = Diameter(radius);
    double circumference = Circumference(radius);
    double area = Area(radius);

    printf("Diameter of the circle: %.2lf\n", diameter);
    printf("Circumference of the circle: %.2lf\n", circumference);
    printf("Area of the circle: %.2lf\n", area);

    return 0;
}
