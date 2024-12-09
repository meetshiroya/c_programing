#include<stdio.h>
int main(){
  int n;
  printf("enter a persentage : ");
  scanf("%d",&n);
  // first types
  // if(n>80){
  //   printf("A gread \n");
  // }
  // else if(n>70){
  //   printf("B gread \n");   
  // }
  // else if(n>60){
  //   printf("C gread \n");
  // }
  // else{
  //   printf("D gread \n");
  // }
  // second types

  if(n>80){
    printf("A gread \n");
  }
  else{
    if(n>60){
    printf("B gread \n");
    }
    else{
      if(n<40){
        printf("C gread \n");
      }
      else{
        printf("D gread \n");
      }
    }
  }
return 0;
}