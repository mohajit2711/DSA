#include<bits/stdc++.h>
vector<int> Klargest(vector<int> &a, int k, int n) {
   sort(a.begin(),a.end());
    vector<int> v;
    v.assign(a.begin()+(n-k),a.end());
    return v;
}
