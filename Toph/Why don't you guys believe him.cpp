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
	ll n, t, a=0, b, c, i;
	
    cin>>t>>n;
    
    fr(i, t){
    	cin>>b;
    	a+=b;
    }
    cout<<(a>n?"Yes":"No")<<endl ;
   return 0;
}