#include<stdio.h>
int main(){
  int n; 
  printf("enter number for n: ");
  scanf("%d",&n);                     // this code even is, subtrsct odd is  add
  int sum=0;
  for(int i=0;i<=n;i++)
  {
    if(i%2!=0) sum=sum+i;
    else sum=sum-i;
  }
  printf("the sum is %d",sum);
  return 0;
}