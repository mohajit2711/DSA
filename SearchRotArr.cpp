class Solution {
public:
	int p1(int &st1,int &en1, int target,vector<int>nums){
		while(st1<=en1){
			int mid1=st1+(en1-st1)/2;
			if(target>nums[mid1]){
				st1=mid1+1;
			}
			else if(target<nums[mid1]){
				en1=mid1-1;
			}
			else{
				return mid1;
			}            
		}
		return -1;
	}
	int p2(int &st2,int &en2, int target,vector<int>nums){
		while(st2<=en2){
			int mid2=st2+(en2-st2)/2;
			if(target>nums[mid2]){
				st2=mid2+1;
			}
			else if(target<nums[mid2]){
				en2=mid2-1;
			}
			else{
				return mid2;
			}
		}
		return -1;
	}
	int search(vector<int>& nums, int target) {
		int m=nums.size();
		int n=m;
		int start=0, end=n-1, res=0;
		while(start<=end){
			int mid=start+(end-start)/2;
			int nxt=(mid+1)%n;
			int prv=(mid+n-1)%n;
			if(nums[mid]<=nums[nxt] && nums[mid]<=nums[prv]){
				res=mid;
				break;
			}
			else if(nums[mid]>nums[end]){
				start=mid+1;
			}
			else if(nums[mid]<nums[end]){
				end=mid-1;
			}
		}
		int st1=0, en1=res-1, st2=res, en2=m-1;
		if(p1(st1,en1,target,nums)!=-1 || p2(st2,en2,target,nums)==-1){
			return p1(st1,en1,target,nums);
		}
		else if(p1(st1,en1,target,nums)==-1 || p2(st2,en2,target,nums)!=-1){
			return p2(st2,en2,target,nums);
		}
		else{
			return -1;
		}
		return res;

	}
};
