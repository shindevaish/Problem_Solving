/*Write a menu-driven C program to find the area of the circle, area of the triangle
and area of the rectangle according to the user’s input choice.*/

#include<stdio.h>
int main(){
    int choice;

    printf("1.Area of circle.\n");
    printf("2.Area of triangle.\n");
    printf("3.Area of rectangle.\n");
    printf("Enter choice code:");
    scanf("%d",&choice);

    switch(choice){
        float radius,base,height,length,breadth;
        case 1:

            printf("Enter radius:");
            scanf("%f",&radius);

            float area_circle=3.14*radius*radius;

            printf("Area of circle:%f\n",area_circle);
            break;
        case 2:

            printf("Enter base and height side:");
            scanf("%f %f",&base,&height);

            float area_triangle=0.5*base*height;

            printf("Area of triangle:%f\n",area_triangle);
            break;
        case 3:

            printf("Enter length and breadth of rectangle:");
            scanf("%f 3%f",&length,&breadth);

            float area_rectangle=length*breadth;

            printf("Area of rectangle:%f\n",area_rectangle);
            break;
        default:
            printf("Invalid choice code.\n");
    }

    return 0;
}