// Project Euler - 005
   /* By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, 
        we can see that the 6th prime is 13.

    What is the 10 001st prime number?   */

#include <stdio.h>

long nthPrime(int num){
    printf("number: %d\n", num); 
    long primes[num];
    int primeCt = 0;

    int i;
    for(i = 2; primeCt < num; i++){
        int j;

        for (j = 0; j < primeCt; j++){
            if ( i % primes[j] == 0){
                goto not_prime;
            }
        }
        primes[primeCt] = i;
        primeCt++;

        not_prime: 
            ;

    }
    
    // debug
    for(int a = 0; a < num; a++){
        printf("n[%d]: %ld\n", a, primes[a]);
    }
    
    return primes[num-1];
}

int main() {
    long prime;
    prime = nthPrime(10001);
    printf("nth prime: %ld\n", prime);
   return 0;
}
