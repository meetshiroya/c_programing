#include<stdio.h>
int stair(int n){
  if(n==1 || n==2) return n;
  
  int totalway=stair(n-1)+stair(n-2);
  return totalway;
}
int main(){
  int n;
  printf("enter number for n: ");
  scanf("%d",&n);
  int way=stair(n);
  printf("%d",way);
  return 0;
}