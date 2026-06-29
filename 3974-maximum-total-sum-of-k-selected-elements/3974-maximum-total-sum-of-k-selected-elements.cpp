class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
       long long sum=0;
       sort(nums.begin(), nums.end(), greater<int>());
       for (int i=0; i<min(k, (int)nums.size()); i++){
        long long val=0;
        if (mul>0)
             val= 1LL*nums[i] *mul;
        else 
             val =nums[i];    
        mul--;
        sum+=val;

       } 
       return sum;
    }
};