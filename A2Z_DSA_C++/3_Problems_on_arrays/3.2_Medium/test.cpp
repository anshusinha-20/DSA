#include<iostream>
#include<cmath>
#include<vector>
using namespace std;


// int main(){
// 	int n;
// 	cin >> n;

// 	for (int i = 1; i <= n; i++) {
// 		for (int j = n - i; j > 0; j--) {
// 			cout << " ";
// 		}
//         int temp = i;
// 		for (int k = 0; k < i; k++) {
// 			cout << temp;
// 			temp++;
// 		}
// 		cout << endl;
// 	}

// 	return 0;
// }

int main() {
	int n;
	cin >> n;

	vector<int> result;
	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			result.emplace_back(i);
			if (n/i != i) {
				result.emplace_back(n/i);
			}
		}
	}

	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << " ";
	}
	cout << endl;

	return 0;
}

