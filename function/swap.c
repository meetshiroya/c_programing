#include<stdio.h>
void swap(int a,int b){ 
      int temp = a;  
      a=b;
      b=temp;
  return;

}
int main(){

   int a,b,temp;
   printf("enter first number a : ");
   scanf("%d",&a);
   printf("enter second number b : ");
   scanf("%d",&b);

  // use in 3rd variable 
  //  temp=a;
  //  a=b;
  //  b=temp;

  // with out use to 3rd variable

  // a=a+b;
  // b=a-b;
  // a=a-b;
  
   swap(a,b);

   printf("\n the value of a %d",a);
   printf("\n the value of b %d",b);
 
   return 0;
}