class Solution {
public:
    int compress(vector<char>& chars) {
        string ans = "";
        int count = 0;

        for(int i = 0; i < chars.size(); i++){
            count = 1;

            for(int j = i+1; j < chars.size(); j++){
                if(chars[i] == chars[j]){
                    count++;
                }else{
                    break;
                }
            }

            ans.push_back(chars[i]);

            if(count > 1){
                string s = to_string(count);
                for(int k = 0; k < s.size(); k++){
                    ans.push_back(s[k]);
                }
            }
            i += count - 1;
        }
        for(int i = 0; i < ans.size(); i++){
            chars[i] = ans[i];
        }
    return ans.size();
    }
};