#include<stdio.h>

int fact(int n ){
  int f = 1 ;
  for (int i=1;i<=n;i++)
  {
    f = f * i ;
  }
  return(f) ;
}

int main(){
  int x = fact(5);
  printf("%d",x);
}