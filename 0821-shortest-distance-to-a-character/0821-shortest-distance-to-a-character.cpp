class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        unordered_map<char, vector<int>>mp;
        vector<int>ans;
        for(int i=0;i <s.size(); i++){
            mp[s[i]].push_back(i);
        }
        for(int i=0; i<s.size(); i++){
            int mini=INT_MAX;
            for(int idx :mp[c]){
                mini= min(mini, abs(idx-i));
            }
      ans.push_back(mini);
        }
        return ans;
    }
};