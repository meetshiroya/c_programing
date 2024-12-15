#include<stdio.h>
int main()
{
  int n,i,a=0;
  printf("enter value for n: ");
  scanf("%d",&n);

  for(i=2;i<=n-1;i++)
  {
    if(n%2==0){
    a=1;
    break;
    }
  }
if(n==1) printf("1 number neither prime nor composite ");
 else if(a==0){
  printf("the given number is prime \n");
 }
 else{
  printf("the given number is composite \n");
 }
return 0;
}
