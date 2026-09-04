class Solution {
public:
    bool isHappy(int n) {
        set<int>st;

        while(n!=1){
            if(st.find(n)!=st.end()){
                return false;
            }
            st.insert(n);

            int r=0;
            while(n>0){
                int d=n%10;
                r += d*d;
                n=n/10;
            }
            n=r;
        }
        return true;
        
    }
};