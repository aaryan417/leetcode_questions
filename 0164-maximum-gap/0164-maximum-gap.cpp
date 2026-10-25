class Solution {
public:
    int maximumGap(vector<int>& nums) {
       if (nums.size()<2)
        return 0; 

        int diff=0, ans=0;
       sort(nums.begin(), nums.end());
       for(int i=0; i<nums.size()-1; i++){
        diff=abs(nums[i]-nums[i+1]);
        ans=max(ans, diff);
    
       }
       return ans;
    }


};