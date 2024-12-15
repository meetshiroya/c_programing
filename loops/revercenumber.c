#include<stdio.h>
int main(){
  int n; 
  printf("enter number for n: ");
  scanf("%d",&n);

  int r = 0;
 
  while(n>0)
  {
    r=r+(n%10);
    r=r*10;
    n=n/10;
  }
  r=r/10;
  
  printf("the reverse number are %d",r);
  return 0;
  }