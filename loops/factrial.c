#include<stdio.h>
int main(){
  int n; 
  printf("enter number for n: ");
  scanf("%d",&n);                    
  int product=1;
  for(int i=1;i<=n;i++)
  {
    product=product*i;
  }
  printf("the factrial is %d",product);
  return 0;
}