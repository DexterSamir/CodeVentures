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
	ll n, m, t, i;
	
    cin>>n;
    string a, b, c, d;
    while (n--){
    	cin>>a>>b>>c>>d;
    	if(a==c||a==d||b==c||b==d){
    		cout<<"Possible"<<endl ;
    	}
    	else cout <<"Oh no!, such a shame"<<endl ;
    }
    
    
    
   return 0;
}