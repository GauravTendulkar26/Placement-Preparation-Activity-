#include<stdio.h>

int main(){
  int x ;
    printf("Enter the number");
    scanf("%d", &x);

    int nsp = x- 1 ;
  for (int i = 1; i <= x; i++)
  {
    for(int q = 1; q<=nsp ; q++)
    {
      printf(" ");
    }
    nsp -- ;
    for (int j = 1; j <= i; j++)
    {
      printf("x");
    }
    printf("\n");
  }
}