#include<stdio.h>
int maza (int cr,int cc,int er,int ec){
  int rightway=0;
  int downway=0;
  if(cr==er && cc==ec) return 1;
  if(cr=er){ //only right way
     rightway += maza(cr,cc+1,er,ec);
  }
  if(cc==ec){
    downway +=maza(cr+1,cc,er,ec);
  }
  if(cr<er && cc<ec){
    rightway += maza(cr,cc+1,er,ec);
    downway +=maza(cr+1,cc,er,ec);
  }
  int totalway=rightway+downway;
  return totalway;
}
int main(){
  int n;
  printf("the enter of row of maza n: ");
  scanf("%d",&n);
  int m;
  printf("the enter of colum of maza m: ");
  scanf("%d",&m);
  int nuofrow=maza(1,1,m,n);
  printf("%d",nuofrow);
  return 0;
}