class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int *dp = new int[n];
        for(int i=0;i<n;i++) dp[i]= INT_MAX;
        dp[0]=0;
        int i=1,j=0;
        
        while(i<n) {
            if(nums[j]+j>=i) {
                dp[i]=min(dp[i],dp[j]+1);
                i++;
            } else {
                j++;
            }
        }
        return dp[n-1];
    }
};
