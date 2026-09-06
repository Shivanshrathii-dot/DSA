class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char, int>map;
        for(char ch:s){
            if(map.count(ch)){
                return ch;
            }
            map[ch]=1;
        }
        return ' ';
    }
};