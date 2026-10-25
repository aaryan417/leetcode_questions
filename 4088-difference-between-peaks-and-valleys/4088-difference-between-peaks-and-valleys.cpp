class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
       int i=0, j=1, k=2;
       int peak=0, valy=0;
        while(k<nums.size()){
            if (nums[i]<nums[j] && nums[j]>nums[k])
              peak+=nums[j];

            else if (nums[i]>nums[j] && nums[j]<nums[k])
            valy+=nums[j];
            i++;
            j++;
            k++;
        }

        return peak-valy;
    }
};