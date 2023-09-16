void reverse(vector<int>& arr, int l, int r) {
    while (l <= r) {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }
}
vector<int> nextGreaterPermutation(vector<int> &A) {
    // Write your code here.
    int n = A.size();

    int index = -1;
    for (int i = n-2; i >= 0; i--) {
        if (A[i] < A[i+1]) {
            index = i; 
            break;
        }
    }

    if (index == -1) {
        reverse(A, 0, n-1);
        return A;
    }

    for (int i = n-1; i > index; i--) {
        if (A[i] >= A[index]) {
            swap(A[i], A[index]);
            break;
        }
    }

    reverse(A, index+1, n-1);

    return A;
}