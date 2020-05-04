#include <bits/stdc++.h>
using namespace std;
//Author: Ezio Sam
#define ll long long
#define pb push_back 
#define sp " "
#define s string
int main()
{
	ll n, a, fac;
	cin>>n;
	vector <ll> v;
	while(n--){
		cin>>a;
		
		v.pb(a);
	}
	
    sort(v.begin(),v.end());
    for(auto x:v) cout<<x<<endl ;
    
   return 0;
}
