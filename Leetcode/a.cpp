#include<stdio.h>
int main(){
  int num = 10;
  int *ptr1 = &num;
  int *ptr2 = ptr1;
  (*ptr1)++;
  (*ptr2) += 5;
  int result = num;
  printf("%d", result--);
  return 0;
}
#include <stdio.h>
int factorial(int n)
{
  if (n == 0 || n == 1)
  {
    return;
  }
  else
  {
    return n * factorial(n - 1);
  }
}
int main()
{
  printf("Factorial : %d", factorial(5));
  return 0;
}

#include <stdio.h>

int main()
{
  int i = 1;
  while (i++ <= 1)
    ;
  while (i++ <= 2)
    ;
  printf("%d", i);
  return 0;
}