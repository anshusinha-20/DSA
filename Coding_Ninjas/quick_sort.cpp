int partitionArray(int input[], int start, int end) {
	// Write your code here
	int pivot = input[start];
	int i = start;
	int j = end;

	while (i < j) {
		while (input[i] <= pivot && i <= end) {
			i += 1;
		}
		while (input[j] > pivot && j >= start) {
			j -= 1;
		}
		if (i < j) {
			swap(input[i], input[j]);
		}
	}
	swap(input[start], input[j]);
	return j;
}

void quickSort(int input[], int start, int end) {
	/*
		Don't write main().
		Don't read input, it is passed as function argument.
		Change in the given array itself.
		Taking input and printing output is handled automatically.
	*/
	if (start < end) {
		int p_index = partitionArray(input, start, end);
		quickSort(input, start, p_index - 1);
		quickSort(input, p_index + 1, end);
	}
}

