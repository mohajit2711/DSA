class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
                
        vector<int> freq(2005,0);
        
        for(int num:arr)
            freq[num + 1000]++;
        
        sort(freq.begin(), freq.end());
        
        int preVal = 0;
        
        for(int i=1; i<freq.size(); i++)
            if (freq[i] > 0 && freq[i] == freq[i-1])
                return false;
            
        return true;
        
    }
};
