// Project Euler - 001
   /* If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. 
        The sum of these multiples is 23.
        Find the sum of all the multiples of 3 or 5 below 1000. */
#include <stdio.h>

int main() {
    int index, sum = 0;

    for (index = 3; index < 1000; index = index +1){
        printf("Index: %d\n", index);
        if (index % 3 == 0 || index % 5 == 0) sum = sum + index;
    }
    printf("sum: %d\n", sum);

   return 0;
}