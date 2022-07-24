int sqrtN(long long int N)
{
    // Write your code here.
    int s=0;
    int e=1e+16; //or unsigned int e = N;
    long long int mid=s+(e-s)/2;

    while(s<=e){
        if(N==1ll*mid*mid)
            return mid;
        else if(N<1ll*mid*mid){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return e;
}
