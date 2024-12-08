#include<stdio.h>
int main(){

  int a,b,q,remaindor; //a>b
  printf("enter divident for a : "); 
  scanf("%d",&a);
  printf("enter divisor for b : ");
  scanf("%d",&b);
  
   /*q=a/b;
   remaindor=a-b*q; //divisor * quotient + remender = divident
   printf("the remainder when %d is dividend by %d is : %d",a,b,remaindor);*/
   remaindor = a%b;

   printf("the remainder is  : %d",remaindor);
}