// BRUTE FORCE: APPROACH 1
bool isPrime(int n)
{
	// Write your code here.
	int count = 0;
	for (int i = 1; i <= n; i += 1) {
		if (n % i == 0) {
			count += 1;
		}
	}
	if (count == 2) {
		return 1;
	}
	return 0;
}

// BRUTE FORCE; APPROACH 2
bool isPrime(int n)
{
	// Write your code here.
	if (n <= 1) {
		return 0;
	}
	else if (n == 2) {
		return 1;
	}
	for (int i = 2; i < n; i += 1) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

// BEST APPRROACH - SQUARE ROOT METHOD
#include<cmath>
bool isPrime(int n)
{
	// Write your code here.
	int count = 0;
	
	for (int i = 1; i <= sqrt(n); i += 1) {
		if (n % i == 0) {
			count += 1;
			if (n/i != i) {
				count += 1;
			}
		}
	}
	if (count == 2) {
		return 1;
	}
	return 0;
}
