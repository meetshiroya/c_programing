#include<stdio.h>
int sum(int n){
  if(n==1 || n==0) return 1;
  int s=n+sum(n-1);
  return s;
}
int main(){
  int n;
  printf("enter number for n: ");
  scanf("%d",&n);
  int suum =sum(n);
  printf("%d",suum);
  return 0;
}