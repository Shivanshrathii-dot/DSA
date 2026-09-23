class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i=0;i<nums2.size();i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        int mid= nums1.size()/2;
        double output=0;
        if(nums1.size()%2!=0){
            output= nums1[mid];
        }else{
             output=(nums1[mid-1]+nums1[mid])/2.0;

        }
       
            return output;
    }
};