#include<stdio.h>
    void simple_interest(float principal,float rate,float time){
       float SI;   
       SI = principal*rate*time/100;      
       printf("Value of Simple Interest is : %.2f \n",SI);    
       float total_amount= principal + SI;
       printf("Value of Total Amount(with interest) is : %.2f ",total_amount);
    
    }
    int main(){
        float principal,rate,time;
        printf("Enter Principal amount(in rupees)\n");
        scanf("%f",&principal);
        printf("Enter Interest rate\n");
        scanf("%f",&rate);
        printf("Enter time period (in Years)\n");
        scanf("%f",&time);
        simple_interest(principal,rate,time);
        return 0;
        }

