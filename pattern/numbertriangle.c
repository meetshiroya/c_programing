#include<stdio.h>
int main(){
  int n;
  printf("enter number of row : ");
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){      // for(int j=4;j>=i;j--)
      printf("%d ",j);
    }
    printf("\n");
  }
return 0;
}