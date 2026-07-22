class Solution {
public:
    void fun (vector<int>& candidates, int id, int target, int total, vector<vector<int>>& res,vector<int>com){
     if (total==target){
     res.push_back(com);  
     return ;
     }
     if (id >=candidates.size() || total > target)
     return ;

     com.push_back(candidates[id]);
     fun (candidates, id, target, total+candidates[id], res,com);
     com.pop_back();
      fun (candidates, id+1, target, total, res, com);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
     vector<vector<int>>res;
     vector<int>com;
     fun (candidates, 0, target, 0, res,com);
     return res;    
    }
};