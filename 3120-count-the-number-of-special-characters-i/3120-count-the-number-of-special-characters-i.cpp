class Solution {
public:
    int numberOfSpecialChars(string word) {
       bitset<26> small, capital ;
       for (char c :word){
        if (c>='a' && c<= 'z'){
            small[c-'a']=1;

        }
        else 
           capital[c-'A']=1;
       } 

       small= small & capital;
       return small.count();
    }
};