class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int m=nums[nums.size()-1];
        int n=nums[0];

        unordered_map<int , int>mp;
        for(auto x:nums){
            mp[x]++;
        }
            for(int x=n;x<=m;x++){
                if(!mp.count(x)){
                   ans.push_back(x);
                }
            }
        return ans;
        
        
    }
};