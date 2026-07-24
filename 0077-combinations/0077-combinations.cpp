class Solution {
public:
void fun(int n, int k, int start, vector<int>&comb, vector<vector<int>>&ans ){
    if (comb.size()==k){
        ans.push_back(comb);
        return;
    }
    for(int i=start; i<=n; i++){
        comb.push_back(i);
        fun(n,k,i+1, comb, ans);
        comb.pop_back();

    }
}
    vector<vector<int>> combine(int n, int k) {
     vector<vector<int>>ans;
     vector<int>comb;
     fun(n, k, 1, comb, ans);
     return ans;
    }
};