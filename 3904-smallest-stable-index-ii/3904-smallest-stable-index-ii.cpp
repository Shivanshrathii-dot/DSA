class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        //TLE
        // int maximum=nums[0];
        // for(int i=0;i<nums.size();i++){
        //     maximum=max(maximum, nums[i]);
        //     int minimum=nums[i];
        //     for(int j=i;j<nums.size();j++){
        //         minimum=min(minimum, nums[j]);
        //     }
        //     if(maximum-minimum <=k){
        //         return i;
        //     }
        // }
        // return -1;
        int preffixmax=nums[0];
        vector<int>suffixMin(nums.size());
        suffixMin[nums.size()-1]=nums[nums.size()-1];
        for(int j=nums.size()-2;j>=0;j--){
            suffixMin[j]=min(nums[j], suffixMin[j+1]);
        }
        for(int i=0;i<nums.size();i++){
            preffixmax=max(preffixmax, nums[i]);
             if(preffixmax-suffixMin[i]<=k){
                return i;
             }
        }
        return -1;
    }
};