class Solution {
public:
    int minElement(vector<int>& nums) {
       int ans=INT_MAX;
      for (int i=0; i<nums.size(); i++){
        int sum=0;
        while(nums[i]>9){
            int temp =nums[i]%10;
            nums[i]/=10;
            sum+=temp;

        }
        sum+=nums[i];
        nums[i]=sum;
        ans=min(ans,sum);
      }
        return ans;
    }
};