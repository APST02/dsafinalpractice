class Solution {
public:
    void solve(string digits,string output,int index ,vector<string> &ans,string mapping[]){
        if(index>=digits.size()){
            ans.push_back(output);
            return;
        }
        int num=digits[index]-'0';
        string value=mapping[num];
        for(int i=0;i<value.length();i++){
            char ch=value[i];
            output.push_back(ch);
            solve(digits,output,index+1,ans,mapping);

            output.pop_back(); 
        }

        
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()==0){
            return ans;
        }
        string output="";
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz",};
        int index=0;
        solve(digits,output,index,ans,mapping);
        return ans;
    }
};