// Series is S= 1+5+10+15 ... upto N
#include<stdio.h>
void sum_of_series(int N){
 int sum=1;
 for(int i=5;i<=N;i+=5){
            sum = sum + i;
        }
        printf("Sum of the series(S) is : %d\n",sum);
}
 int main(){
        int N;
        printf("Enter value 'N' (Find sum of the series upto term N)\n");
        scanf("%d",&N);
        sum_of_series(N);
        return 0;
}
