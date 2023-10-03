   #include<stdio.h>
void compare_max(int a,int b,int c,int d){
 if(a>b){
    if(a>c){
        if(a>d)
        printf("%d has max value among these \n",a);
        else
        printf("%d has max value among these \n",d);
    }
 }
 if(b>a){
    if(b>c){
        if(b>d)
        printf("%d has max value among these \n",b);
        else
        printf("%d has max value among these \n",d);
    } 
 }
 if(c>a){
    if(c>b){
        if(c>d)
        printf("%d has max value among these \n",c);
        else
        printf("%d has max value among these \n",d);
    } 
 }

}
int main(){
    int w,x,y,z;
    printf("Enter your 4 integers \n");
    scanf("%d %d %d %d",&w,&x,&y,&z);
    compare_max(w,x,y,z);
    return 0;
    }
