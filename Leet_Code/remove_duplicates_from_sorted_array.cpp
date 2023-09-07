class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for (int j = 1; j < nums.size(); j += 1) {
            if (nums[j] != nums[i]) {
                nums[i + 1] = nums[j];
                i += 1;
            }
        }
        return i+1;
    }
};