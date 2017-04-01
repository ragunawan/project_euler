// Project Euler - 003
   /* The prime factors of 13195 are 5, 7, 13 and 29.
        What is the largest prime factor of the number 600851475143 ?*/
#include <stdio.h>

long maxFactor(long num){
    printf("number: %ld\n", num);    
    long div = 2;
    while (div < num){
        if (num % div == 0 && num/div > 1){
            num = num/div;
            div = 2;
        } else {
            div = div + 1;
        }
    }
    printf("largest prime factor: %ld\n", num);
    return num;
}

int main() {
    long max;
    max = maxFactor(600851475143);
   return 0;
}

