#include<stdio.h>
int main(){
  int n;
  printf("enter number :");
  scanf("%d",&n);
  if(n%5==0||n%3==0)
  {
    printf("the number diviseble by 5 or 3");
  }
  else
  {
    printf("the number not diviseble by 5 or 3");
  }
  return 0;
}