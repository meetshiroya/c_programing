#include<stdio.h>
int main(){
  int x,y;
  printf("enter the cordinate :" );
  scanf("%d %d",&x,&y);
  if(x==0 && y==0)
  {
    printf("the point is origin");
  }
  else if(x==0)
  {
    printf("lise on y-axis");
  }
  else if(y==0)
  {
    printf("lise on x-axis");
  }
  else{
    printf("the point dose not line on x or y axis and it is does not origin");
  }
}