class Solution {
public:
    int xorOperation(int n, int start) {
       vector<int> nums;
        int ans=0;
     
        for(int i=0;i<n;i++){
            ans=ans ^ (start +2*i);
            }
       
        return ans;
        
    }
};
