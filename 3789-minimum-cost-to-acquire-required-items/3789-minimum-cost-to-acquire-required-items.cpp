class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long first= 1LL*cost1*need1 + 1LL*cost2*need2;
        long long second= 1LL*max(need1,need2)*costBoth;
        int m=min(need1 , need2);
        long long third=1LL*costBoth*m + 1LL*(need1-m)*cost1 + 1LL*(need2-m)*cost2;
        return min(first,min(second,third));




    }
};