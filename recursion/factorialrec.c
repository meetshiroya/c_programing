#include<stdio.h>
int factorial(int n){
  if(n==1 || n==0) return 1;
  int rec =n*factorial(n-1); //base case
  return rec; 
}
int main(){
  int n;
  printf("enter value for n: ");
  scanf("%d",&n);
  int fact=factorial(n);
  printf("the factorial is %d",fact);
  return 0;
}