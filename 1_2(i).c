#include<stdio.h>
void area_of_circle(float radius){
    float pie=3.14159265359;
    float area = pie*radius*radius;
    printf("Area of required circle is : %.5f ",area);
}
int main(){
    float radius;
    printf("Enter radius of circle\n");
    scanf("%f",&radius);
    area_of_circle(radius);
    return 0;
}
