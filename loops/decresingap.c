#include<stdio.h>
int main(){
  int n,i,a=100;
  // printf("enter value for n: ");
  // // 100 97 94 91 88 85 82 79 76 73 .... print gp with out maths 
  // scanf("%d",&n);
  for(i=1;a>0;i++)
  {
    printf("%d ",a);
    a=a-3;
  }
  return 0;
}