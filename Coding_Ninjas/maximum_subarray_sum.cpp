long long maxSubarraySum(vector<int> arr, int n)
{
    // Write your code here.
    long long sum = 0;
    long long maxi = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum < 0) {
            sum = 0;
        }
        else {
            maxi = max(sum, maxi);
        }
    }

    if (maxi <= 0) {
        return 0;
    }
    else {
        return maxi;
    }
}