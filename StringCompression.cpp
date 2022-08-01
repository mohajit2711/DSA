class Solution {
public:
    int compress(vector<char>& chars) {
        string ans="";
        int start=0;
        while(start<chars.size()){
            int end=start;
            while(end<chars.size() and chars[start]==chars[end]){
                end++;
            }
            if(end-start==1){
                ans+=chars[start];
            } else {
                ans+=chars[start];
                ans+=to_string(end-start);
            }
            start=end;
        }
        for(int i=0;i<ans.size();i++){
            chars[i]=ans[i];
        }
        return ans.size();
    }
};
