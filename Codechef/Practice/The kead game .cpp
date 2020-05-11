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
	ll n, m=0, t, a=0, b=0, c, i, x, y;
	
    cin>>n;
    
    while (n--){
    	cin>>x>>y;
    	a+=x;
    	b+=y;
    	
    	c=abs(a-b);
    	
    	if(c>m){
    		m=c;
    		t=(a>b? 1:2);
    	}
    }
    cout<<t<<sp<<m<<endl ;
    
    
   return 0;
}
