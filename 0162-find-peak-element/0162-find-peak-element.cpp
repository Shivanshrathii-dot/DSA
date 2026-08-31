class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>nums[k]){
                k=i;
            }
        }
        return k;
        
    }
};