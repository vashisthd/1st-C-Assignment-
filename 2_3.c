  #include<stdio.h>
#include<math.h>
void roots(float a,float b,float c){
    float discriminant= ((b*b)-4*a*c);
    if(discriminant>0){
        printf("Roots of this equation are real and distinct\n");
        float root1 = -b/2*a +sqrt(discriminant)/2*a;
        float root2 = -b/2*a -sqrt(discriminant)/2*a;
        printf("Roots are:- %.2f , %.2f \n",root1,root2);
    }
    else if(discriminant==0){
        printf("Roots of this equation are real and equal\n");
        float root1= -b/2*a;
        printf("Roots are:- %.2f , %.2f \n",root1,root1);
    }
    else if(discriminant<0){
        printf("Roots of this equation are imaginary..\n");
        float r1= -b/2*a;
        float r2= sqrt(-discriminant)/2*a;
// use ‘i’ as Iota ..Bcoz I don’t know how to use complex function in c …
        printf("Roots are:- %.2f +i %.2f, %.2f -i %.2f \n",r1,r2,r1,r2);
    }
    else 
    printf("Your input data has some error \n");
}
int main (){
    float a,b,c;
    printf("Enter value of 'a','b','c' as the required equation is ax^2 +bx +c...\n");
    scanf("%f %f %f",&a,&b,&c);
    roots(a,b,c);
    return 0;
}
