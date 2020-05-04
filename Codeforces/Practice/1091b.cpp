#include <bits/stdc++.h>
using namespace std;
//Author: Ezio Sam
#define ll long long
#define pb push_back 
#define sp " "
#define s string
#define fr(i,n) for(i=0;i<n;i++)
#define fn(i,n) for(i=1;i<=n;i++)
#define fa(i,a,n) for(i=a;i<=n;i++)

int main()
{
	
	ll i, a, b,m=0,n=0, t;
    cin>>t;
    fr(i,t*2){
    	cin>>a>>b;
    	m+=a;
    	n+=b;
    }
    
    cout<<m/t<<sp<<n/t;
   return 0;
}