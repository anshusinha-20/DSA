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
