class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+2;j<nums.size();j++){
        //         if(nums[i]==nums[j]){
        //             nums.erase(nums.begin()+j);
        //             j--;
        //         }
        //     }
        // }
        // return nums.size();


        // int j=0;
        // for(int i=0;i<nums.size();i++){
        //     if(j<2 || nums[i] != nums[j-2]){
        //         nums[j]=nums[i];
        //         j++;
        //     }
        // }
        // return j;
        int j = 0;

        for (int x : nums) {
            if (j < 2 || x != nums[j - 2]) {
                nums[j] = x;
                j++;
            }
        }

        return j;
    }
};
    