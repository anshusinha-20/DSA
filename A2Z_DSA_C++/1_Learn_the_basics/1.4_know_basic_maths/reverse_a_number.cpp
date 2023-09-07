#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin >> n;
	int rev = 0;
	int temp = 0;
	
	while (n > 0 || n < 0) {
		temp = n % 10;
		rev = rev * 10 + temp;
		n /= 10;
	}
	cout << rev;

	return 0;
}
