class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> nums;

        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "C") {
                nums.pop_back();
            }
            else if (operations[i] == "D") {
                nums.push_back(nums.back() * 2);
            }
            else if (operations[i] == "+") {
                int n = nums.size();
                nums.push_back(nums[n - 1] + nums[n - 2]);
            }
            else {
                nums.push_back(stoi(operations[i]));
            }
        }

        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }

        return sum;
    }
};