class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
     char getMaxOccuringChar(string str)
    {
        // Your code here
        map<char,int> mp;
        for(int i=0;i<str.size();i++){
            mp[str[i]]++;
        }
        int res = -1;
        for(auto x:mp){
            if(x.second>res){
                res = x.second;
            }
            
        }
        for(auto x:mp){
            if(x.second == res){
                return x.first;
            }
            
        }
        return'$';
        
    }
