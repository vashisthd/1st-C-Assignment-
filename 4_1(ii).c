// pattern using numbers
#include<stdio.h>
void pattern(int n){
   int i,j,space;
   
   for(i=1;i<=n;i++){
    for(space=1;space<=(n-i);space++){
        printf(" ");
    }
    for(j=1;j<=(2*i)/2-1/2;j++){
        int x=j%10;
        printf("%d",x);
    }
    for(j=i-1;j>=1;j--){
        int x=j%10;
        printf("%d",x);
    }
printf(" \n");
   }
   
}
int main (){
    int n;
    printf("Enter n for number of lines\n");
    scanf("%d",&n);
    pattern(n);
    return 0;
} 
