class Solution {
public:
    int lengthOfLastWord(string s) {
        int cur=s.size()-1;
        for(;cur>=0 && s[cur]==' ';cur--)
            ;
        int last=cur;
        for(;cur>=0 && s[cur]!=' ';cur--)
            ;
        return last-cur;
    }
};
