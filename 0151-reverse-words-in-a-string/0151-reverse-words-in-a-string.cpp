class Solution {
    private:
    void reverse(string &s, int i, int j){
        while(i<j){
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
    void removeExtraSpaces(string &s) {
        int i = 0, j = 0;

        while(j < s.length()) {
            if(s[j] != ' ') {
                if(i > 0) {
                    s[i++] = ' ';
                }

                while(j < s.length() && s[j] != ' ') {
                    s[i++] = s[j++];
                }
            }
            else {
                j++;
            }
        }

        s.resize(i);
    }
public:
    string reverseWords(string s) {
        removeExtraSpaces(s);
        reverse(s, 0, s.length()-1);
        int i=0;
        while(i<s.length()){
            while(i<s.length()&& s[i]==' '){
                i++;
            }
            int j=i;
            while(j<s.length() && s[j]!=' '){
                j++;
            }
            reverse(s, i, j-1);
            i=j;
        }
        return s;
        
        
    }
};