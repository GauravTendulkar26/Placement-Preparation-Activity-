#include<stdio.h>

// Write a function in C to calculate simple interest.
int main(){

  float p , t , Ri;
  printf("Enter the priciple amt");
  scanf("%f", &p);
  printf("Enter the rate of interest");
  scanf("%f", &Ri);
  printf("Enter the time");
  scanf("%f", &t);

  float si = (p*t*Ri)/100 ;

  printf("%f", si);

}