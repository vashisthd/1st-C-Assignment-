 // program 2 by using multiple if-else instead of && operator 
 #include<stdio.h>
void compare_num(int a,int b,int c){
 if(a>b){
    if(a>c)
    printf("%d has max integer value among them \n",a);
    else 
    printf("%d has max integer value among them \n",c);
 }
 if(b>a){
    if(b>c)
    printf("%d has max integer value among them \n",b);
    else 
    printf("%d has max integer value among them \n",c);
 }
}
int main(){
    int x,y,z;
    printf("Enter your 3 integers \n");
    scanf("%d %d %d",&x,&y,&z);
    compare_num(x,y,z);
    return 0;
} 
