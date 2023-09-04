#include<math.h>
bool checkArmstrong(int n){
	//Write your code here
	int original = n;
	int length = log10(n) + 1;
	int sum = 0;
	int temp = 0;

	while (n > 0) {
		temp = n % 10;
		sum += pow(temp, length);
		n /= 10;
	}

	return original == sum;
}
