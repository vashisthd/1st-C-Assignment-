#include<stdio.h>
void area_of_rectangle(float length,float breadth){
    float area = length*breadth;
    printf("Area of required rectangle is : %.2f\n",area);
}
void perimeter_of_rectangle(float length,float breadth){
    float perimeter = 2*(length+breadth);
    printf("Perimeter of required rectangle is : %.2f\n",perimeter);
}
int main(){
    float length,breadth;
    printf("Enter length of rectangle : ");
    scanf("%f",&length);
    printf("Enter breadth of rectangle : ");
    scanf("%f",&breadth);
    area_of_rectangle(length,breadth);
    perimeter_of_rectangle(length,breadth);
    return 0;
}
