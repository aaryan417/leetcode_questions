class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
       int rows = grid.size();
      int cols = grid[0].size();
      vector<vector<int>>ans(rows, vector<int>(cols));
      int total =rows*cols;
      for (int i=0;i<rows; i++ ){
         for (int j=0;j<cols; j++ ){
            int idx=i*cols+j;
            int newidx =(idx+k)%total;
             int newrow= newidx/cols;
             int newcol= newidx%cols;
             ans[newrow][newcol] = grid[i][j];


            }

         }
      
      return ans; 
    }
};