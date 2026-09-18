class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        for (int i = 0; i < nums.size(); i++) {

            int max_val = *max_element(nums.begin(), nums.begin() + i + 1);

            int min_val = *min_element(nums.begin() + i, nums.end());

            int instability = max_val - min_val;

            if (instability <= k) {
                return i;
            }
        }

        return -1;
    }
};