class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int len=arr.size();
        int sum=0;
        for(int i=0;i<len;i++){
            sum= sum+((len-i) * (i+1)+1)/2 * arr[i];
            
        }
        return sum;
    }
};
