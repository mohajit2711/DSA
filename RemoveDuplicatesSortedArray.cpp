class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1, left = 0, right = left+1;
        while(right < nums.size()){
            if(nums[left] < nums[right]){
                swap(nums[left+1],nums[right]);
                left++;
                right++;
                k++;
            }
            else
                right++;
        }
        return k;
    }
};
