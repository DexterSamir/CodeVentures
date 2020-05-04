#include <bits/stdc++.h>
using namespace std;
//Author: Ezio Sam
#define ll long long
#define pb push_back 
#define sp " "
#define s string

int main()
{
	ll n, a, b, c;
	
    while(cin>>a>>b){
    	ll f=1,g=1,s=0;
    	
    	for(ll i=1;i<=a;i++){
    		f*=i;
    	}
    	for(ll i=1;i<=b;i++){
    		g*=i;
    	}
    	
    	s= f+g;
    	
    	cout<<f+g<<endl ;
    }
    
   return 0;
}