class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
       int sum=0;
       int digit_sum =0;
       string s;

       for(int i=0; i<nums.size(); i++) {
        sum +=nums[i];
        s +=to_string(nums[i]);
       }
       for(int i=0; i<s.size(); i++) {
        digit_sum += s[i] - '0';
       }
       return sum-digit_sum;
    }
};