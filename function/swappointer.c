#include<stdio.h>
void swap(int* x,int*y){
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}
int main(){
  int a,b;
  printf("enter value for a : ");
  scanf("%d",&a);
  printf("enter value for b : ");
  scanf("%d",&b);

  swap(&a,&b);

  printf("\n the value of a is %d ",a);
  printf("\n the value of b is %d ",b);
  return 0;
}