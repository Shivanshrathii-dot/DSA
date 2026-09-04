class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int j=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            while(st.find(s[i]) != st.end()){
                st.erase(s[j]);
                j++;
            }
            st.insert(s[i]);

            ans=max(ans,(int)st.size());
        }
        return ans;
    }
};