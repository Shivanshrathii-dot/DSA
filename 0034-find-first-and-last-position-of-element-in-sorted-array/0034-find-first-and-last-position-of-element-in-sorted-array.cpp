class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto lb= lower_bound(nums.begin(),nums.end(),target);
        auto up=upper_bound(nums.begin(),nums.end(),target);
        if(lb==nums.end()|| *lb!=target){
            return {-1,-1};
        }
        return {
            int(lb-nums.begin()),int(up-nums.begin())-1};

    //   int low=0;
    //   int high= nums.size()-1;
    //   int a=-1;
    //   int b=-1;
    //   //lower bound
      
    //   while(low<=high){
    //     int mid= low + (high-low)/2;
    //     if(nums[mid]>= target){
    //         a=mid;
    //         high=mid-1;
    //     }else {
    //         low=mid+1;
    //     }
    //   }
    //   if(a==-1 || nums[a]!=target){
    //     return {-1, -1};
    //   }
    //   //upper bound
    //   low=0;
    //   high=nums.size()-1;
    //   while(low<=high){
    //     int mid= low + (high-low)/2;
    //     if(nums[mid]<= target){
    //         b=mid;
    //         low=mid+1;
    //     }else{
    //         high=mid-1;   
    //     }
        
    //   }
    //   return {a,b};

    }
};