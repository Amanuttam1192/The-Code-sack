class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int ma = 0;
        for(int i=0; i<s.size(); i++){
            int t=0;
            for(int j=0; j<s[i].size(); j++){
                if(s[i][j] == ' ') 
                    t++;
            }
            ma  = max(ma, t);
        }
        return ma+1;
    }
};
