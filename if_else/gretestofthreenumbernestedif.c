#include<stdio.h>
int main(){
  int a,b,c;
  
  printf("enter value for a: ");
  scanf("%d",&a);
  printf("enter value for b: ");
  scanf("%d",&b);
  printf("enter value for c: ");
  scanf("%d",&c);
  if(a>b){
    if(a>c)
      printf("%d is gretest",a);
    else
      printf("%d is gretest",c);
  } 
  else{
    if(b>c)
      printf("%d is gretest",b);
    else
      printf("%d is gretest",c);
  }
  return 0;
}