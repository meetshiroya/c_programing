#include<stdio.h>
int main(){
  int n,i; 
  printf("enter number for n: ");
  scanf("%d",&n);
  int a=1;
  int b=1;
  int sum=0;
  for(i=1;i<=n-2;i++){
    sum=a+b;
    a=b;
    b=sum;
    }
  printf("the %d fiboncii number%d",n,sum);
return 0;
}