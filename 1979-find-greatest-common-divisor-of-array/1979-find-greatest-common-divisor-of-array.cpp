class Solution {
public:
    int findGCD(vector<int>& nums) {
       
    //   sort(nums.begin(),nums.end());
    //     return gcd(nums[0],nums[nums.size()-1]);


    int a= *min_element(nums.begin(), nums.end());
    int b= *max_element(nums.begin(), nums.end()); 
    return gcd(a,b);  
    }
};