#include<stdio.h>
void incresing(int n){
  if(n==0) return;
  incresing(n-1);
  printf("%d\n",n);
}
int main(){
  int n;
  printf("enter number for n: ");
  scanf("%d",&n);
  incresing(n);
  return 0;
}