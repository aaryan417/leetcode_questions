class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n= nums.size();
      vector <int > freq(n+1,0);
       for (int i : nums){
        freq[i]++;
       }
       int dublicate=-1;
       int missing =-1;
       for(int i=1; i<=n; i++){
        if (freq[i]==2)
          dublicate =i;

        if (freq[i]==0)
        missing =i;
       }
       
      return {dublicate, missing};
    }
};