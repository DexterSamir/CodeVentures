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
	ll n, a, b, c=INT_MIN , i,j;
	
    cin>>n;
    
    fn(i,n){
    	fn(j,n){
    		if(i*j==n){
    			a=i+j;
    			
    			if(a>c) c=a;
    		}
    	}
    	}
    cout<<c;
   return 0;
}