#include<stdio.h>
int main(){
  int n;
  printf("enter number :");
  scanf("%d",&n);
  // if(n%5==0||n%3==0)
  // {
  //   if(n%15!=0){
  //   printf("the number diviseble by 5 or 3 but not fifty");
  //   }
  //   else{
  //     printf("the number  diviseble by fifty");
  //   }
  //}
  if((n%5==0 || n%3==0) && n%15!=0){
    printf("the number diviseble by 5 or 3 but not fifty");
  }

  else
  {
    printf("the number not matching required condition");
  }
  return 0;
}