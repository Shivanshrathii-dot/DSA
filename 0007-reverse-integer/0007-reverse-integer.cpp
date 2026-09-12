class Solution {
public:
    int reverse(int x) {
        int temp=x;
        long long rev=0;
        while(temp!=0){
            int digit=temp%10;
            temp=temp/10;
            rev= rev*10+digit;
            
        }
        if(rev >INT_MAX || rev <INT_MIN){
            return 0;
        }
        return rev;  
    }
};