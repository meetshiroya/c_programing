#include<stdio.h>
int power(int a,int b){
  if(b==0) return 1;
  int rec=a*power(a,b-1);
  return rec;
}
int main(){
  int a,b;
  printf("enter value base a: ");
  scanf("%d",&a);
  printf("enter value power b: ");
  scanf("%d",&b);
  int p= power(a,b);
  printf("%d rasid to power %d is %d",a,b,p);
  return 0;
}