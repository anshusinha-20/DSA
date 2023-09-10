#include<vector>

int getSingleElement(vector<int> &arr){
	// Write your code here.	
	int xor1 = 0;
	for (int i = 0; i < arr.size(); i++) {
		xor1 ^= arr[i];
	}

	return xor1;
}