bool isValid(char ch){
    if((ch>='a'&&ch<='z') || (ch>='A'&&ch<='Z') || (ch>='0' && ch<='9')){
        return true;    //that means a valid char as per our input
    }
    else{
        return false;    //special or other characters
    }
}

char toLowerCase(char ch){
    if((ch>='a' && ch<='z') || (ch>='0' && ch<='9')){
        return ch;    //these are the lower case chars & 0-9 no. they need not to be transformed
    }
    else{
        return (ch-'A'+'a');    //ch-'A' gives the difference from A in ascii values then add 'a', makes it small of ch
    }
}

bool checkPalindrome(string s)
{
    int start = 0;
    int end = s.length()-1;
    while(start<=end){
        if(!isValid(s[start])){
            start++;    //this function will return true if the char is valid and we negate that and make it false so as to make it proceed till last if case
            //if it returns false we negate and make it true coz that marks special characters encountered so just move over them
        }
        else if(!isValid(s[end])){
            end--;    //same logic as above
        }
        else{
            //here real inplace comparisons happens
            if(toLowerCase(s[start])!=toLowerCase(s[end])){
                return false;    //it'l return false if the corresponding extremeties do not match, so break and return false, else if they match check till inside
            }
            else{
                //extremeties matched => move inside
                start++;
                end--;
            }
        }
    }
    return true;    //after checking till interior of every elements
}
