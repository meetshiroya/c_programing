#include<stdio.h>
void postprint(int n){
  if(n==0) return ;
  printf("pre %d\n",n);
  postprint(n-1);
  printf("in %d\n",n);
  postprint(n-1);
  printf("post %d\n",n);
  return ;
}
int main(){
  int n;
  printf("enter value for n: ");
  scanf("%d",&n);
  postprint(n);
  return 0;
}