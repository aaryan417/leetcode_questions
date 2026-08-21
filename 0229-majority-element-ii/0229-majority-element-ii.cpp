class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int n =nums.size();
      unordered_map<int , int>counter__;
      vector<int>majrotiy_el;
      for (int i=0;i<n; i++ ){
      counter__[nums[i]]++;


      }
      int trashold= n/3+1;
      for( auto i :counter__){
        int element =i.first;
        int count=i.second;
        if (count>=trashold)
        {
majrotiy_el.push_back(element);
        }
      }


    
    
    
    return majrotiy_el;
    }

};