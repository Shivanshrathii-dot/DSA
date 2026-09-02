class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.size()<2){
            return 0;
        }
        int k = 0;
        for (int i = 0; i < nums.size()-1; i++) {
            int diff = nums[i+1] - nums[i];
            if (diff > k) {
                k = diff;
            }
        }
        return k;
    }
};