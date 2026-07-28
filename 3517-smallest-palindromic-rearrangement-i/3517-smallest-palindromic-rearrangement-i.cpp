class Solution {
public:
    string smallestPalindrome(string s) {
       unordered_map<char, int>mp;
       for(int i=0; i<s.size(); i++){
        mp[s[i]]++;

       }
       string frist="";
       string middle ="";
       for(char ch='a';ch <='z'; ch++  ){
        int cnt=mp[ch];
        frist+=string(cnt/2,ch);
        middle+=string(cnt%2, ch);

       }
       string last=frist;
       reverse(last.begin(), last.end());
       return frist+middle+last;
    }
};