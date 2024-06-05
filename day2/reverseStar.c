#include<stdio.h>

int main(){
    int x,i,j,k ;
    printf("Enter the number");
    scanf("%d", &x);

    for(i=0;i< x; i++)
    {
      for(j=0;j< i; j++)
      {
        printf("  ");
      }
      for(k=0;k<x-1;k++)
      {
        printf("x ");
      }
       printf("\n");
    }
    
}