#include<stdio.h>
int main(){
  int n;
  printf("enter number :");
  scanf("%d",&n);
  
  if(n%5==0){
    if(n%3==0){
      printf("the number is diviseble by 5 and 3");
    }
    else{
      printf("the number is not diviseble by 5 and 3");
    }
  }
  else{
    printf("the number is not diviseble by 5 and 3");
  }
return 0;
}