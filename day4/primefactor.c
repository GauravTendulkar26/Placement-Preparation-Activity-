#include <stdio.h>

int main(){

  int x , i ;
  printf("Enter the number");
  scanf("%d", &x);

  for ( i = 2; i < x; i++)
  {
   while (x%i == 0)
   {
    printf("%d ",i);
    x = x/i;
   }
   
  }
  
}

