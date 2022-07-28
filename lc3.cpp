class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        vector<int> res;
        vector<int> fin;
        for(int i=0;i<n/2;i++){
            ans.push_back(nums[i]);
        }
        for(int i=n/2;i<n;i++){
            res.push_back(nums[i]);
        }
    
            int a=ans[0];
            int b=res[0];
        while(a--)
            {
                fin.push_back(ans[1]);
            }
        while(b--)
            {
                
                fin.push_back(res[1]);
            }
        
            
            
        
        return fin;
    
        
    }
};
