class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int maximum=nums[0];
        for (int i = 0; i < nums.size(); i++) {
             maximum=max(maximum,nums[i]);
            int minimum=nums[i];
             for (int j = i; j < nums.size(); j++) {
                minimum = min(minimum, nums[j]);
            }

            if ((maximum - minimum) <= k) {
                return i;
            }
        }
        return -1;
    }
};