class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum=0;
        int max_el=INT_MIN;
      for(int i=0; i<nums.size();i++){
        sum+=nums[i];
        max_el=max(max_el,nums[i]);

      }
    //    int max_el=max(nums.begin(), nums.end());
      int max_sum=max_el*nums.size();
      return max_sum-sum; 
    }
};