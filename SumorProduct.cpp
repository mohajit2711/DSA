long long int sumOrProduct(long long int n, long long int q)

{

   long long mod = 1000000007;

if(q == 1) {

 return (n*(n+1)/2) % mod;

   }

   else {

       long long ans = 1;

       for(long long i = 1; i <=n ; ++i) {

           ans *= i;

           ans %= mod;

       }

       return ans;

   }

}
