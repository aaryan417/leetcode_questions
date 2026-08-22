class Solution {
public:
    int digitsum(string num){
        int digit_sum=0;

       for(int i=0; i<num.size(); i++){
    digit_sum+=num[i]-'0';

       }
       return digit_sum;
    }

      int digitpro(string num){
        int digit_p=1;

       for(int i=0; i<num.size(); i++){
    digit_p *=(num[i]-'0');

       }
       return digit_p;
    }
    
    bool checkDivisibility(int n) {
     string num = to_string(n);
     int sum=digitsum(num)+digitpro(num);
     return n%sum==0;
    }
};