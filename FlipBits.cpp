int flipBits(int* arr, int n)  

{

   // WRITE YOUR CODE HERE

   int count = 0;

   for(int i =0;i<n;i++){

       if(arr[i] == 1){

           count++;

           arr[i] = -1;

       }

       else{

           arr[i] = 1;

       }

   }

   int currentsum = 0;

   int maximumsum = 0;

   for(int i =0; i<n; i++){

       currentsum += arr[i];

       if(currentsum >= maximumsum){

           maximumsum = currentsum;

       }

       if(currentsum < 0){

           currentsum = 0;

       }

   }

   return count + maximumsum;

}
