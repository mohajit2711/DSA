class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int lastzero = n+m-1;
        for(int lz=m; lz<lastzero; lz++) { // Setting all extra space to smaller number than constraint
            nums1[lz] = INT_MIN;
        }
        
        int i = m-1, j = n-1;
        while(j >= 0 && lastzero >= 0) {
            if(i < 0 || nums2[j] >= nums1[i]) { // if nums2[j] is greater than rest of nums1 than put it on last blank space
                nums1[lastzero] = nums2[j];
                j--;
            } else { // if nums1[i] is greater than nums2 than swap it with last blank space
                nums1[lastzero] = nums1[i];
                nums1[i] = INT_MIN;
                i--;
            }
            
            while(lastzero >= 0 && nums1[lastzero] != INT_MIN) { // Update last blank space
                lastzero--;
            }
        }
    }
};
