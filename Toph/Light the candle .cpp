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
	ll n, a, b, c, i;
	
    cin>>n;
    
    while(n--){
      ll sum =0;
    	cin>>a;
    	
    	fr(i,a){
    		cin>>b;
    		sum+=b;
    	}
    	
    	cout<<sum<<endl ;
    }
    
   return 0;
}