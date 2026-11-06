class Solution {
public:
    string longestPalindrome(string s) {
        int max=0;
        string ans=" ";
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                if(s[i]==s[j]){
                    int left=i;
                    int high=j;
                    bool flag=true;
                    while(left<high){
                        if(s[left]!=s[high]){
                            flag=false;
                        }
                        left++;
                        high--;
                    }
                    if(flag && j-i+1>max){
                        max=j-i+1;
                        ans=s.substr(i,max);
                    }
                }
            }
        }
        return ans;
        
        
    }
};