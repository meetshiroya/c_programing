#include<stdio.h>
int main(){
  int n,i,a=1;
  printf("enter value for n: ");
  // 1 2 4 8 16 32 64.... print gp with out maths 
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    printf("%d ",a);
    a=a*2;
  }
  return 0;
}