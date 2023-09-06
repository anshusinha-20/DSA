void selectionSort(vector<int>&arr) {
    // Write your code here.
    for (int i = 0; i < arr.size()-1; i += 1) {
        int min_index = i;
        for (int j = i; j < arr.size(); j += 1) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}