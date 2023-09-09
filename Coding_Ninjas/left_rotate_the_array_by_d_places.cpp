void reverse(vector<int>& arr, int l, int r) {
    while (l <= r) {
        int temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l += 1;
        r -= 1;
    }
} 

vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int n = arr.size();
    k = k % n;

    reverse(arr, 0, k-1);
    reverse(arr, k, n-1);
    reverse(arr, 0, n-1);

    return arr;
}
