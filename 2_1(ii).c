//  problem 1(using if-else)
#include<stdio.h>
int compare(int a,int b){
    // int a,b;
    if (a>b){
        int c=a+b;
        printf("Required value of addition is %d\n",c);
    }
    else if (a<b){
    int d=b-a;
    printf("Required value of subtraction is %d\n",d);
    }
    else {
        printf("No results for these enteries \n");
    }
   
    return 0;
}
int main(){
    int a,b;
    printf("Enter value of a & b \n");
    scanf("%d %d",&a,&b);
    compare(a,b);
    return 0;
}
