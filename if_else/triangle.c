#include<stdio.h>
int main(){
  int a,b,c;
  
  printf("enter 1st side: ");
  scanf("%d",&a);
  printf("enter 2nd side: ");
  scanf("%d",&b);
  printf("enter 3rd side: ");
  scanf("%d",&c);
  if((a+b)>c && (b+c)>a && (a+c)>b)
  {
    printf("valid triangel");
  }
  else
  {
    printf("invalid triangel");
  }
  return 0;
}