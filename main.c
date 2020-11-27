#include <stdio.h>
#include <stdlib.h>

// call by value
void dup_func(unsigned int *x ){
      x = x + 1;
      printf("%d",x);
}
int main()
{
   int a = 5;
    //dup_fun(a);
    // call by reference
    dup_func(&a);
    printf("after = %d", a);
    return 0;
}

