class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string val1="";
        string val2="";
        for(int i=0;i<word1.size();i++){
            val1=val1+word1[i];
            
        }
         for(int i=0;i<word2.size();i++){
         
            val2=val2+word2[i];
            
        }
        
        if(val1==val2) return true;
        return false;
    }
};
