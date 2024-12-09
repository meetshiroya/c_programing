#include<stdio.h>
int main(){
  int lenght,breadth,area,perameter;
  printf("enter lenght value :");
  scanf("%d",&lenght);
  printf("enter breadth value :");
  scanf("%d",&breadth);
  area=lenght*breadth;
  perameter=2*(lenght+breadth);
  if(area>breadth)
  {
    printf("area is gretar then perametae");
  }
  else
  {
    printf("area is not gretar then perametae");
  }
  return 0;   
}
