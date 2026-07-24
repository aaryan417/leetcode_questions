class Solution {
public:
    void fun(vector<int>& nums,
             vector<vector<int>>& ans,
             vector<int>& dairy) {

        // Base case
        if (dairy.size() == nums.size()) {
            ans.push_back(dairy);
            return;
        }

        // Try every number
        for (int i = 0; i < nums.size(); i++) {

            // Skip if already used
            if (find(dairy.begin(), dairy.end(), nums[i]) != dairy.end())
                continue;

            // Choose
            dairy.push_back(nums[i]);

            // Explore
            fun(nums, ans, dairy);

            // Backtrack
            dairy.pop_back();
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<int> dairy;

        fun(nums, ans, dairy);

        return ans;
    }
};