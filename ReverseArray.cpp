void reverseArray(vector<int> &arr , int m)

{

// Write your code here.

   

   int start=m+1;

   int end=arr.size()-1;

   while(start<end)

   {

       int temp=arr[start];

       arr[start]=arr[end];

       arr[end]=temp;

       start++;

       end--;

   }

}
