// Program of Perimeter & Area of Triangle 
#include<stdio.h>
#include<math.h>
void perimeter_of_triangle(float side1,float side2,float side3){
    float perimeter = side1+side2+side3;
    printf("Perimeter of required triangle is : %.2f\n",perimeter);
}
void area_of_triangle(float side1,float side2,float side3){
   float s = (side1+side2+side3)/2;
   float area = sqrt(s*(s-side1)*(s-side2)*(s-side3));
   printf("Area of required triangle is : %.2f\n",area);
}
int main(){
    float side1,side2,side3;
    printf("Enter side 1 : ");
    scanf("%f",&side1);
    printf("Enter side 2 : ");
    scanf("%f",&side2);
    printf("Enter side 3 : ");
    scanf("%f",&side3);
    perimeter_of_triangle(side1,side2,side3);
    area_of_triangle(side1,side2,side3);
    return 0;
}
