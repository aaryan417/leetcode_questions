class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>leftsum;
        vector<int>rightsum;
        vector<int>ans;
        leftsum.push_back(0);
        rightsum.push_back(0);
        int left_sum=0;
        int right_sum=0;
        for(int i=0; i<nums.size()-1; i++){
          left_sum+=nums[i];
          leftsum.push_back(left_sum);
          
        //   right_sum
        //   rightsum.push_back()
        }

        for(int i=nums.size()-1; i>0; i--){
         right_sum+=nums[i];
         rightsum.push_back(right_sum);
        }
        reverse(rightsum.begin(), rightsum.end());
        for(int i=0; i<leftsum.size(); i++){
          ans.push_back(abs(leftsum[i]-rightsum[i]));  
        }
     return ans;
    }
};