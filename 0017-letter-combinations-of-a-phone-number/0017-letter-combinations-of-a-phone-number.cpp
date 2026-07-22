class Solution {
public:
void fun(string digits, vector<string > &ans, string dairy, int n, int idx,unordered_map<char, string> &f ){
    if (idx==n)
    {
        ans.push_back(dairy);
        return;
    }
    string choise=f[digits[idx]];
    for(int i=0;i<choise.size(); i++){
        dairy.push_back(choise[i]);
        fun(digits, ans, dairy, n, idx+1 ,f);
        dairy.pop_back();
    }
    return ;
}
    vector<string> letterCombinations(string digits) {
    unordered_map<char, string>f ;
    f['2']="abc";
    f['3']="def";
    f['4']="ghi";
    f['5']="jkl";
    f['6']="mno";
    f['7']="pqrs";
    f['8']="tuv";
    f['9']="wxyz";

    vector<string >ans;
    string dairy;
    string choise;
    fun(digits, ans, dairy,digits.size(), 0,f );
    return ans;
    }
};