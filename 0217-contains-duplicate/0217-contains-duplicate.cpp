class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
     unordered_map<int ,int >n;
     for(int i =0; i<nums.size(); i++){
         n[nums[i]]++;
         if (n[nums[i]] >= 2){
            return true;
        }
     }
     return false;
    }
    
};
