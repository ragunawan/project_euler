// Project Euler - 005
   /* 2520 is the smallest number that can be divided by each of the numbers 
        from 1 to 10 without any remainder.
        
    What is the smallest positive number that is evenly divisible by all of 
        the numbers from 1 to 20?   */
#include <stdio.h>

long smallestMultiple(int num){
    printf("number: %d\n", num); 
    long multiple = 0;
    int cont = 1;

    while (cont){
        multiple = multiple + num;
        for (int max = num; max > 0; max = max - 1){
            if (multiple % max == 0 && max == 3){
                printf("mult: %ld\n", multiple);
                return multiple;
            } else if (multiple % max != 0){
                break;
            }
            
        }
    }

    return multiple;
}

int main() {
    long min;
    min = smallestMultiple(20);
   return 0;
}
