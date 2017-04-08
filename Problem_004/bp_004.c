// Project Euler - 0004
   /*



A palindromic number reads the same both ways. The largest palindrome
made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

   */

#include <stdio.h>
typedef int bool;
#define TRUE  1
#define FALSE 0

bool palCheck(int num){
	char check[6];
	int count = 0;
	sprintf(check,"%d", num);
	for (int i = 0; i < sizeof(check); i++){
		if (check[i] == check[sizeof(check) - 1 - i]){
			count++;
		}
	}
	if (count == sizeof(check)){
		return TRUE;
	} else return FALSE;
}

int digitPal(int min, int max) {
	int x, y = 0;

	for (int i = min; i <= max; i++) {
		for (int j = min; j <= max; j++){
			x = i * j;

			if (palCheck(x)) {
				if (x > y){
					y = x;
				}
			}
		}
	}
	return y;
}


int main() {
	int pal;
	pal = digitPal(100, 999);
	printf("Largest palindrome: %d\n", pal);
}
