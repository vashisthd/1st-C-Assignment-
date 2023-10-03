 /*3_3.c
 '*'pattern printing problem */
#include<stdio.h>
void pattern(int n){
    int i=1;
    for(;i<=n;i+=1){
        for (int j=1;j<=i;++j){
            printf("* ");
        }
        printf("\n");
    }
}
int main(){
    int n;
    printf("Enter the value of n \n");
    scanf("%d",&n);
    pattern(n);
    return 0;
}
