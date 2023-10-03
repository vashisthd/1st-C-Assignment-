 // Series is S=1 -3 + 5 -7 ...upto N
#include<stdio.h>
#include<math.h>
void sum_of_series(int n){
    int a=1,sum=0;
    for (int i=1; ;i++){
        if (i%2==0){
            a=-a;
            sum=sum+a;
            a=-a;
        }
        else{
            sum=sum+a;
        }
        if (a==n||a==-n){
            break;
        }
        a+=2;      //a=a+2;
    }
    printf("Sum of the series(S) is : %d\n", sum);
}
int main(){
    int n;
    printf("Enter value 'n' (Find sum of the series upto term n)\n");
    scanf("%d", &n);
    sum_of_series(n);
    return 0;
}
