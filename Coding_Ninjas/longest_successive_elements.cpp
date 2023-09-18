int partition(vector<int>& arr, int start, int end) {
    int pivot = arr[start];
    int i = start;
    int j = end;

    while (i < j) {
        while (arr[i] <= pivot && i <= end) {
            i++;
        }
        while (arr[j] > pivot && j >= start) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[start], arr[j]);
    
    return j;
}

void quicksort(vector<int>& arr, int start, int end) {
    if (start < end) {
        int p_index = partition(arr, start, end);
        quicksort(arr, start, p_index-1);
        quicksort(arr, p_index+1, end);
    }
}

int longestSuccessiveElements(vector<int>&a) {
    // Write your code here.
    int n = a.size();
    quicksort(a, 0, n-1);

    int longest = 1;
    int count = 1;
    int el = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] == el+1) {
            count += 1;
            el = a[i];
        }
        else if (a[i] != a[i-1]) {
            count = 1;
            el = a[i];
        }
        longest = max(longest, count);
    }

    return longest;
}