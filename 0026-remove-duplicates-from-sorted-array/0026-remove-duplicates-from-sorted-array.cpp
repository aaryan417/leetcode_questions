class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int  index=1,i=0,j=1;

       while(j<nums.size()){
        if (nums[i]==nums[j]){
            i++,j++;
            }
        else {
                nums[index]=nums[j];
                index++;
                i++;
                j++;
            }
        }
       
      
       return index ;
    }


};






