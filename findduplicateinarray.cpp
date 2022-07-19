int findDuplicate(vector<int> &arr)  

{

   // Write your code here

   int sum=0;

   int n=arr.size();

for(int i=0;i<n;i++)

   {

       sum+=arr[i];

   }

   return sum-(n*(n-1))/2;

   

}
