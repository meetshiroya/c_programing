#include<stdio.h>
int main(){
  int n;
  printf("enter number of row : ");
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    int a=1;
    for(int j=1;j<=i;j++){
     
      int d=a+64;
      char ch=(char)d;      // for(int j=4;j>=i;j--)
      printf("%c ",ch);
      a++;
    }
    printf("\n");
  }
return 0;
}