#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    double l, y,t, k=0;
    
    cin>>t;
    
    while(t--){
    	cin>>l>>y;
    	k+=l*y;
    }
   
    cout<<fixed<<setprecision (3)<<k;
}