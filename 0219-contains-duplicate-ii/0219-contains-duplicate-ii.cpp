class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]==nums[j]){
        //             if(abs(i-j)<=k){
        //                 return true;
        //             }
        //         }
        //     }
        // }
        // return false;
        // int i = 0;
        // while (i < nums.size()) {
        //     int j = i + 1;
        //     while (j < nums.size()) {
        //         if (nums[i] == nums[j]) {
        //             if (abs(i - j) <= k) {
        //                 return true;
        //             }
        //         }

        //         j++;
        //     }
        //     i++;
        // }
        // return false;
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            if (mp.find(nums[i]) != mp.end()) {
                if (i - mp[nums[i]] <= k) {
                    return true;
                }
            }
            mp[nums[i]] = i;
        }
        return false;
    }
};