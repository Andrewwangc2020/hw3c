// Author: Andrew Wang aqw5628@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int digit_sum(long n) {
  if (n>0){
    return n%10 + digit_sum(n/10);
  }
  else{
    return 0;
  }
}

int main(void) {
  char *num = readline("Enter an int: ");
  int init_num = atof(num); 
  int fin_sum = digit_sum(init_num);
  printf("sum of digits of %d is %d.sum is .\n", init_num, fin_sum);
}