// factorial of a number
#include<stdio.h>
int factorial(int n){
    if(n>0){
    int i=1;
    int product =1;
    for(;i<=n;i+=1){
        product = product*i;
    }
    printf("Value of n factorial is %d \n",product);
    return 0;
    }
    else if(n==0){
        printf("Value of factorial is zero\n");
    }
    else 
    printf("Factorial doesn't exist \n");
}
int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    factorial(n);
    return 0;
}
