#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    double a, sum=0,t, i=1;
    
    cin>>t;
    
    while(t--){
    	cin>>a;
    	sum+=a;
    	cout<<fixed<<setprecision(4)<<sum/i++<<endl;
      }
    
    
}