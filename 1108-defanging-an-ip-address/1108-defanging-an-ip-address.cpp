class Solution {
public:
    string defangIPaddr(string address) {
        string newaddress="";
        for(int i=0;i<address.size();i++){
            if(address[i]=='.'){
                newaddress+="[.]";
            }else{
                newaddress+=address[i];
            }
        }
        return newaddress;

        
    }
};