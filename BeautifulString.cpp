int makeBeautiful(string str) {

   int countf=0;

   int countr=0;

   int i = 0;

   

   while(i<str.length()){

       if(i%2==0){

           if(str[i]!='0'){

               countf++;

           }

           else{

               countr++;

           }

       }

       if(i%2==1){

           if(str[i]!='0'){

               countr++;

           }

           else{

               countf++;

           }

       }

       i++;

   }

   return countf<=countr?countf:countr;

}
