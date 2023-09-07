void reverse(int l, int r, vector<int> &nums) {
    int temp;
    if (l >= r) { // if left index is more than or equal to right index than terminate the process
        return;
    }
    temp = nums[l];
    nums[l] = nums[r];
    nums[r] = temp;
    reverse(l + 1, r - 1, nums);
}

vector<int> reverseArray(int n, vector<int> &nums)
{
    // Write your code here.
    if (n <= 1) {
        return nums;
    }
    reverse(0, n-1, nums); // passing left most index, right most index and vector nums
    return nums;
}
