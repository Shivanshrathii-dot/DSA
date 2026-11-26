class Solution {
public:
    void checking(int n,int m,int &b){
        if(n<m){
            return;
        }
        n-=m;
        b++;
        checking(n,m-1,b);
    }
    bool canAliceWin(int n) {
        int b=0;
        checking(n,10,b);
        return b%2!=0;
        

    }
};