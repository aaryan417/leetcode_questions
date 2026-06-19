class Solution {
public:
    int largestAltitude(vector<int>& gain) {
      int ans=0;

     for (int i=0; i<gain.size(); i++){
      int temp= gain[i]+temp;
      ans= max(ans, temp); 
     }
     return ans;
    }
};