#include<stdio.h>
void pattern(int n){
   int i,j,space;
   for(i=1;i<=n;i++){
    for(space=1;space<=(n-i);space++){
        printf(" ");
    }
    for(j=1;j<=(2*i)-1;j++){
        printf("%c",64+j);
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
