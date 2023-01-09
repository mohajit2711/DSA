class Solution {
public:
    void Permutations(int ind, vector<int> &nums, vector<vector<int>> &ans){
        if(ind == nums.size()){
            ans.emplace_back(nums);
            return;
        }
        for(int i=ind ; i<nums.size() ; i++){
            swap(nums[ind],nums[i]);
            Permutations(ind+1, nums, ans);
            swap(nums[ind],nums[i]);
        }
    }   
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        Permutations(0, nums, ans);
        return ans;
    }
};
