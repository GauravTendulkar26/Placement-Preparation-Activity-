#include<stdio.h>
// 1.	Program to Convert even number into its upper nearest odd number Switch Statement.


int main(){
  int x ;
  printf("Enter the number");
  scanf("%d", &x);

  if (x % 2 != 0)
  {
    printf("Enter the valid even number");
    return 1;
  }
      switch (x%2)
      {
      case 0:
        x = x+1;
        break;
      default:

        break;
      }
         printf("%d", x);

  return 0 ;
  
}