class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>output;
        for(int i=left;i<=right;i++){
            int n=i;
            bool valid=true;
            while(n>0){
                int digit=n%10;

                if(digit==0){
                    valid= false;
                    break;
                }
                if(i%digit !=0){
                    valid= false;
                    break;
                }
                n=n/10;
            }
            if(valid){
                output.push_back(i);
            }

        }
        return output;
        
    }
};