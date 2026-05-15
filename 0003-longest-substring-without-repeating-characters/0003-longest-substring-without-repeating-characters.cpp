class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int high=0, low=0, res= INT_MIN;
       unordered_map<char ,int>f;
       for (int high=0; high< s.size(); high++){
         f[s[high]]++;
         int k=high- low+1;

         while (f.size()<k){
            f[s[low]]--;
            if (f[s[low]]==0){
                f.erase(s[low]);

            }
            low++;
            k=high-low+1;
         }
         int len=high-low+1;
         res=max(res,len);
       } 
return res== INT_MIN ? 0 :res;
    }
};