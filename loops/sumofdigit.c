#include<stdio.h>
int main(){
  int n;
  // int sum = 0;
  // int lastdigit=0;
  printf("enter number for n: ");
  scanf("%d",&n);
  // if(n%2==0){}
    
  
  int sum = 0;
  int lastdigit=0;
  while(n!=0)
  {
    lastdigit = n%10; 
    sum = sum + lastdigit;
    n=n/10;
  }
  
  printf("the sum of digit are %d",sum);
  return 0;
  }