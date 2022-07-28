vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
// Write your code here.
   n--,m--;
   int carry=0;
   vector<int> v;
   while(n>=0 || m>=0)
   {
       int sum = (n>=0 ? a[n--] : 0) + (m>=0 ? b[m--] : 0) + carry;
       v.insert(v.begin(),sum%10);
       carry= (sum>=10 ? 1 : 0);
   }
   if(carry)
       v.insert(v.begin(),carry);
   return v;
}
