class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
    unordered_map<int ,int >n;
     for(int i =0; i<nums.size(); i++){
         n[nums[i]]++;
         if (n[nums[i]] >= 2){
            ans.push_back(nums[i]);
        }
     }
     return ans;                    
    }
};