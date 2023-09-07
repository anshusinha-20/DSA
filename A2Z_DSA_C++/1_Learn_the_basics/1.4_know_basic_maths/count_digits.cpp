int countDigits(int n){
	// Write your code here.	
	int original = n;
	int total = 0;
	int temp;

	while (n > 0) {
		temp = n % 10;
		if (temp != 0 && original % temp == 0) {
			total += 1;
		}
		n = n / 10;
	}
	return total;
}