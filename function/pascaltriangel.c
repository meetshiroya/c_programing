#include<stdio.h>
int factorial(int x){
  int fact =1;
  for(int i=2;i<=x;i++){
    fact=fact*i;
  }
  return fact;
}
int combination(int n,int r){
  int ncr=factorial(n)/(factorial(r)*factorial(n-r));
  return ncr;
}
int main(){
  int n,r;
  printf("enter value for n :");
  scanf("%d",&n);
    for(int i=0;i<=n;i++){
      // for(int i=0;i<=n-i-1;i++){
      // printf(" ");
      // }
      for(int j=0;j<=i;j++){
        int icj = combination(i,j);
        printf("%d ",icj);
        }
         printf("\n");
      
    }
 
  
 return 0;
}