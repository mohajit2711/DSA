string replaceSpaces(string &str){

 int n=str.length();

    int count = 0;

   // we will store the count of how many spaces are there

   for(int i=0;i<n;i++){

       if(str[i]==' '){

           count++;

       }

   }

   // below we have increase the size of string in order to iterate completely

   // as when we add @40 in place of space the size of string increases

   n=str.length() + (count*2);  

   for(int i=0;i<n;i++){

       if(str[i]==' '){

           str.erase(i,1);

           str.insert(i,"@40");

       }

   }

   return str;
}
