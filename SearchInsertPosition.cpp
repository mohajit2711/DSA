class Solution {
public:
int searchInsert(vector<int>& nums, int target) {
		int i = 0;
		int n = nums.size();
		int s = 0;
		int e = n-1;
		while(s<=e){
				int mid = (s+e)/2;
				if(nums[mid] == target){
					//i = mid;
					//break;
					return mid;
					}
				if(nums[mid] < target){
					i = mid+1;
					s = mid+1;
					continue;
					}
				if(nums[mid] > target){
					i = mid;
					e = mid-1;
					}
				}
				return i;
		}
};
