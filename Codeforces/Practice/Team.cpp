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
	ll n, a, b, c, i, t=0;
	
    cin>>n;
    
    fr(i, n){
    	cin>>a>>b>>c;
    	if(a+b+c>1) t++;
    }
    
    cout<<t<<endl ;
   return 0;
}