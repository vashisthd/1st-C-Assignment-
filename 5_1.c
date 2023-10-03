#include<stdio.h>
 void calender(int d,int m,int y){
    if(d==1|| d==21||d==31){
  switch (m)
  {
 case 1: printf("%dst January , %d ",d,y) ;
 break;
 case 2: printf("%dst February , %d ",d,y) ;
 break;
 case 3: printf("%dst March , %d ",d,y) ;
 break;
 case 4: printf("%dst April , %d ",d,y) ;
 break;
 case 5: printf("%dst May , %d ",d,y) ;
 break;
 case 6: printf("%dst June , %d ",d,y) ;
 break;
 case 7: printf("%dst July , %d ",d,y) ;
 break;
 case 8: printf("%dst August , %d ",d,y) ;
 break;
 case 9: printf("%dst September , %d ",d,y) ;
 break;
 case 10: printf("%dst October , %d ",d,y) ;
 break;
 case 11: printf("%dst November , %d ",d,y) ;
 break;
 case 12: printf("%dst December , %d ",d,y) ;
 break;
 default :
 printf("error");
  }
    }
    else if(d==2||d==22){
  switch (m)
  {
 case 1: printf("%dnd January , %d ",d,y) ;
 break;
 case 2: printf("%dnd February , %d ",d,y) ;
 break;
 case 3: printf("%dnd March , %d ",d,y) ;
 break;
 case 4: printf("%dnd April , %d ",d,y) ;
 break;
 case 5: printf("%dnd May , %d ",d,y) ;
 break;
 case 6: printf("%dnd June , %d ",d,y) ;
 break;
 case 7: printf("%dnd July , %d ",d,y) ;
 break;
 case 8: printf("%dnd August , %d ",d,y) ;
 break;
 case 9: printf("%dnd September , %d ",d,y) ;
 break;
 case 10: printf("%dnd October , %d ",d,y) ;
 break;
 case 11: printf("%dnd November , %d ",d,y) ;
 break;
 case 12: printf("%dnd December , %d ",d,y) ;
 break;
 default :
 printf("error");
  }
    }
    else if(d==3||d==23){
  switch (m)
  {
 case 1: printf("%drd January , %d ",d,y) ;
 break;
 case 2: printf("%drd February , %d ",d,y) ;
 break;
 case 3: printf("%drd March , %d ",d,y) ;
 break;
 case 4: printf("%drd April , %d ",d,y) ;
 break;
 case 5: printf("%drd May , %d ",d,y) ;
 break;
 case 6: printf("%drd June , %d ",d,y) ;
 break;
 case 7: printf("%drd July , %d ",d,y) ;
 break;
 case 8: printf("%drd August , %d ",d,y) ;
 break;
 case 9: printf("%drd September , %d ",d,y) ;
 break;
 case 10: printf("%drd October , %d ",d,y) ;
 break;
 case 11: printf("%drd November , %d ",d,y) ;
 break;
 case 12: printf("%drd December , %d ",d,y) ;
 break;
 default :
 printf("error");
  }
    }
   else if(d>=4|| d<=20||d>=24||d<=30){
  switch (m)
  {
 case 1: printf("%dth January , %d ",d,y) ;
 break;
 case 2: printf("%dth February , %d ",d,y) ;
 break;
 case 3: printf("%dth March , %d ",d,y) ;
 break;
 case 4: printf("%dth April , %d ",d,y) ;
 break;
 case 5: printf("%dth May , %d ",d,y) ;
 break;
 case 6: printf("%dth June , %d ",d,y) ;
 break;
 case 7: printf("%dth July , %d ",d,y) ;
 break;
 case 8: printf("%dth August , %d ",d,y) ;
 break;
 case 9: printf("%dth September , %d ",d,y) ;
 break;
 case 10: printf("%dth October , %d ",d,y) ;
 break;
 case 11: printf("%dth November , %d ",d,y) ;
 break;
 case 12: printf("%dth December , %d ",d,y) ;
 break;
 default :
 printf("error");
  }
    }
   else 
   printf("There is some error in ur input \n");
 }
 int main(){
    int d,m,y;
    printf("Enter date in number \n");
    scanf("%d",&d);
    printf("Enter month (in number)\n");
    scanf("%d",&m);
    printf("Enter year \n");
    scanf("%d",&y);
    calender(d,m,y);
 }
