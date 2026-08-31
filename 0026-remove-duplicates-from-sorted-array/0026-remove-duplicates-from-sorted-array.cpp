class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]==nums[j]){
        //             nums.erase(nums.begin()+j);
        //             j--;
        //         }
        //     }
        // }
        // return nums.size();
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(j<1 || nums[i] != nums[j-1]){
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
};