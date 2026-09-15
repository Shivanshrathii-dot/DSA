class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>>n;
        for(auto x:nums){
            int i=0;
            while(i<n.size()){
                bool found=false;

                for(int y:n[i]){
                    if(y==x){
                        found=true;
                        break;
                    }
                }
                if(!found){
                    n[i].push_back(x);
                    break;
                }
                i++;

            }
            if(i==n.size()){
                n.push_back({x});
            }
        }
        return n;

        
    }
};