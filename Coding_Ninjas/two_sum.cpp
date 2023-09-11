int partitionArray(vector<int>& input, int start, int end) {
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

void quickSort(vector<int>& input, int start, int end) {
	if (start < end) {
		int p_index = partitionArray(input, start, end);
		quickSort(input, start, p_index - 1);
		quickSort(input, p_index + 1, end);
	}
}

string read(int n, vector<int> book, int target)
{
    // Write your code here.
    quickSort(book, 0, n-1);
    string ans = "NO";

    int i = 0;
    int j = n-1;
    while (i < j) {
        if (book[i] + book[j] == target) {
            ans = "YES";
            break;
        }
        else if (book[i] + book[j] < target) {
            i++;
        }
        else {
            j--;
        }
    }

    return ans;
}
