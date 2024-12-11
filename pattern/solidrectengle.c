#include<stdio.h>
int main(){
  int n,m;
  printf("enter number for row n: ");
  scanf("%d",&n);
  printf("enter number for columns m: ");
  scanf("%d",&m);
  for(int i=1;i<=n;i++){  // outer loop->no of line 
    for(int i=1;i<=m;i++){ //inner loop-> no of star in each line
      printf("*");
    }
    printf("\n");// har line ke bad ekk enter
  }
  return 0;
}