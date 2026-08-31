class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        // int k=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]>nums[k]){
        //         k=i;
        //     }
        // }
        // return k;
        int l=0;
        int h=nums.size()-1;
        
        while(l<h){
            int mid=l+ (h-l)/2;

            if(nums[mid]<nums[mid+1]){
                l=mid+1;
            }else{
                h=mid;
            }
        }
        return l;
    }
};