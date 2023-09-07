int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int i = 0;
	for (int j = 1; j < n; j += 1) {
		if (arr[j] != arr[i]) {
			arr[i + 1] = arr[j];
			i += 1;
		}
	}

	return i+1;
}