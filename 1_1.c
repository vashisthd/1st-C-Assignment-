  #include<stdio.h>
void function(int a,int b){
    printf("Sum is : %d\nSubtraction is : %d\nMultiplication is %d",a+b,a-b,a*b);

}
int main(){
    int a,b;
    printf("Enter two numbers as 'a'&'b' \n");
    scanf("%d %d",&a,&b);
    function(a,b);
    return 0;
}
