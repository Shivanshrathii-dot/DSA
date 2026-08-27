class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> ans;
        for(int i=nums.size()-1;i>=0;i--){
            ans.push_back(nums[i]);
        }
        nums.insert(nums.end(), ans.begin(), ans.end());
        return nums;
        
    }
};