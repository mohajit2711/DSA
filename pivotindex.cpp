class Solution {
public:
int pivotIndex(vector<int>& nums) {
int totalSum=0;

    for(int n: nums)
    {
        totalSum+=n;
    }
    int sum=0;
    for(int i=0; i<nums.size(); i++)
    {
        
        if(sum*2==totalSum-nums[i])
        {
            return i;
        }
        sum=sum+nums[i];
    }
    return -1;
    
}
};
