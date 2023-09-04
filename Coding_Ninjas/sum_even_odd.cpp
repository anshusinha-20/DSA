#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin >> n;
	
	int temp;
	int even_sum = 0;
	int odd_sum = 0;

	while (n > 0) {
		temp = n % 10;
		if (temp % 2 == 0) {
			even_sum += temp;
		}
		else {
			odd_sum += temp;
		}
		n /= 10;
	}

	cout << even_sum << " " << odd_sum;
	
}
