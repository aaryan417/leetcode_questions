class Solution {
public:
    string smallestSubsequence(string s) {
       
        unordered_map<char,int> count;
        unordered_map<char,bool> used;

        for(char c : s)
            count[c]++;

        string ans;

        for(char c : s) {

            count[c]--;

            if(used[c])
                continue;

            while(!ans.empty() &&
                  ans.back() > c &&
                  count[ans.back()] > 0) {

                used[ans.back()] = false;
                ans.pop_back();
            }

            ans += c;
            used[c] = true;
        }

        return ans; 
    }
};