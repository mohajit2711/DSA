class Solution {
public:
    Solution(){
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    }
    vector<int> findDuplicates(vector<int>& nums) {
        
        vector<int> ans;
        for(int i=0;i<nums.size();++i){
            nums[abs(nums[i])-1]*=-1;
            if(nums[abs(nums[i])-1]>0) ans.emplace_back(abs(nums[i]));
        }        
        return ans;
    }
};
