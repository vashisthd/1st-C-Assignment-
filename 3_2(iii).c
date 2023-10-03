// series 2+4+8+16+32+.......... upto n terms 
#include<stdio.h>
#include<math.h>
void sum_of_series(int n){
    int i,x,sum=0;
    for(i=1;i<=n;i++){
        x= pow(2,i);
        sum = sum + x;
    }
    printf("Sum of given series is : %d",sum);
}
int main(){
    int n;
    printf("Enter value of 'n' (where n denoted the no of terms )\n");
    scanf("%d",&n);
    sum_of_series(n);
    return 0;
}
