 #include<stdio.h>
int compare(int a,int b){
    if (a>b){
        int c=a+b;
        printf("Required addition value is %d\n",c);
    }
    if (a<b){
    int d=b-a;
    printf("Required subtraction value is %d\n",d);
    }
    return 0;
}
int main(){
    int a,b;
    printf("Enter value of a & b \n");
    scanf("%d %d",&a,&b);
    compare(a,b);
    return 0;
}
