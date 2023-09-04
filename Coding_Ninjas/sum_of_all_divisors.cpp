// BRUTE FORCE: APPROACH 1
int sumOfAllDivisors(int n){
	int sum = 0;
	// Write your code here.
	if (n == 0) {
		return 0;
	}	
	else {
		for (int i = n; i > 0; i -= 1) {
			if (n % i == 0) {
				sum += i;
			}
		}
		return sum + sumOfAllDivisors(n - 1);
	}
}

// BEST APPROACH - SQUARE ROOT METHOD

#include<cmath>
int sumOfAllDivisors(int n){
	int sum = 0;
	// Write your code here.
	if (n == 0) {
		return 0;
	}	
	else {
		for (int i = 1; i <= sqrt(n); i += 1) {
			if (n % i == 0) {
				sum += i;
				if (n/i != i) {
					sum += n/i;
				}
			}
		}
		return sum + sumOfAllDivisors(n - 1);
	}
}