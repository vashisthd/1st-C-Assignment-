// program 2 (Find max out of 3 distinct using if-else and && operator)
  #include<stdio.h>
void compare_num(int a,int b,int c){
    if(a>b&&a>c)
    printf("%d has max integer value among them \n",a);
    else if (b>a&&b>c)
    printf("%d has max integer value among them \n",b);
    else if(c>a&&c>b)
    printf("%d has max integer value among them \n",c);
    // return NULL;
}
int main(){
    int x,y,z;
    printf("Enter your 3 integers \n");
    scanf("%d %d %d",&x,&y,&z);
    compare_num(x,y,z);
    return 0;
}  
