class Solution {
public:
    int reverseDegree(string s) {
        int product =1;
        int ans=0;
       for(int i=0; i <s.size(); i++){
         product=('z'-s[i]+1)*(i+1);
          ans+=product;
       } 
       return ans;
    }
};