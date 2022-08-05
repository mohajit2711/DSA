#include <utility>

 

pair < int, int > swap(pair < int, int > swapValues) {

   int temp;

//     cin >> swapValues.first;

//     cin >> swapValues.second;

   temp = swapValues.first;

   swapValues.first = swapValues.second;

   swapValues.second = temp;

   return swapValues;

}
