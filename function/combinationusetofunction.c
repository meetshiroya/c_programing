// #include<stdio.h>
// int factorial(int x){
//   int fact =1;
//   for(int i=2;i<=x;i++){
//     fact=fact*i;
//   }
//   return fact;
// }
// int main(){
//   int n,r;
//   printf("enter value for n :");
//   scanf("%d",&n);
//   printf("enter value for r :");
//   scanf("%d",&r);

//   int ncr=factorial(n)/(factorial(r)*factorial(n-r));
//   printf("%d",ncr);
//   return 0;
// }

// combintion use to two function

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
  printf("enter value for r :");
  scanf("%d",&r);

  int ncr = combination(n,r);
  printf("%d",ncr);
  return 0;
}