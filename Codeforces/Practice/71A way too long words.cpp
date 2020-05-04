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
	ll n, a, b, c, i, t;
	cin>>t;
	
	while(t--){
	
    string s;
    cin>>s;
    n=s.size();
    if(n>10){
    	cout<<s[0]<<n-2<<s[n-1]<<endl ;
    }
    else cout<<s<<endl ;
    }
   return 0;
}