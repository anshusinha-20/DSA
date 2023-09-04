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