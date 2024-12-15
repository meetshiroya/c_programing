#include<stdio.h>
int add (int a,int b){
  return a+b;//pow(a,b)
}
int main(){
  int a,b;
  printf("enter number for a: ");
  scanf("%d",&a);
  printf("enter number for b: ");
  scanf("%d",&b);
  int sum = add(a,b);
  printf("%d",sum);
  return 0;
}