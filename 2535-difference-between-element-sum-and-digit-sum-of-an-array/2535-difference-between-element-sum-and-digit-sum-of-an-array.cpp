class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum = 0;
        int sum1 = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            int n = nums[i];
            while (n > 0) {
                sum1 += n % 10;
                n = n / 10;
            }
        }

        return sum - sum1;
    }
};