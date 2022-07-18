#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int matrix[100][100];
    int i;
    cin>>i;
    for(int x=0;x<i;x++){
        for(int y=0;y<i;y++){
            cin>>matrix[x][y];
        }
    }
   int diag1,diag2;
diag1=0;diag2=0;
    for(int x=0;x<i;x++)
        {
        diag1=diag1+matrix[x][x];
    }
    for(int x=i-1;x>-1;x--)
        {
       
        diag2=(diag2+matrix[i-x-1][x]);   
    }
    int diff = diag1-diag2;
    if(diff<0){
        cout<<-(diff);
    }
    else
        cout<<diff;
    
    return 0;
}
