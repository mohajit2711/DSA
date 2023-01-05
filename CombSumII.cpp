class Solution {
public:
    void f(int i, int sum, vector<int>& c, vector<int>& v, vector<vector<int>>& s){
        if(sum==0){
            s.push_back(v);
            return;
        }
        for(int j=i; j<c.size(); j++){
            if(j>i && c[j]==c[j-1]){continue;}
            if(c[j]>sum){break;}
            v.push_back(c[j]);
            f(j+1, sum-c[j], c, v, s);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>>ans;
        vector<int>v;
        f(0, target, candidates, v, ans);
        return ans;
    }
};
