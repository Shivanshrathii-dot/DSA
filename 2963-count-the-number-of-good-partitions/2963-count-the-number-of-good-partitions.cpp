class Solution {
public:
    int numberOfGoodPartitions(vector<int>& nums) {
        
        int m= 1e9+7;
        int i=0;
        int j=0;
        long long ans=1;
        unordered_map<int, int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=i;
        }
        while(i<nums.size()){
            if(i>j){
                ans=(ans*2)%m;
            }
            j=max(j,mp[nums[i]]);
            i++;

        }  
        return ans;
          }
};