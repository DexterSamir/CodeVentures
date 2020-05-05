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
	ll m, i, s=0, n;
	
    cin>>n>>m;
    --m;
    ll a[n];
    fr(i, n) cin>>a[i];
    fr(i, n){
    	if(a[i]>= a[m] && a[i]){
    		s++;
    	}
    }
    cout<<s<<endl ;
   return 0;
}