#include<stdio.h>
void sum_of_digits(int n){
     int sum =0;
    // for(int j;n!=0;n=n/10){
    //     j=n%10;
    //     sum = sum + j;    //sum+=j;
    // }
    int j;
     
     do{
        j=n%10;
        n=n/10;
        sum = sum+j;
     }
     while(n!=0);
    printf("Sum of all digits on integer is : %d",sum);
}
     
     

int main (){
    int n;
    printf("Enter a interger as 'n'\n");
    scanf("%d",&n);
    sum_of_digits(n);
    return 0;
}
