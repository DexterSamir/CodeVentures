#include <bits/stdc++.h>
using namespace std;
//Author: Ezio Sam
#define ll long long
#define pb push_back 
#define sp " "
#define s string
#define fr(i,n) for(i=0;i<n;i++)
#define fn(i,n) for(i=2;i<=n;i++)
#define fa(i,a,n) for(i=a;i<=n;i++)
#define n 10000000

bool pr[100000000];
vector<ll>v;
void soe(){
	
	for(ll i=2;i*i<=n;i++){
		if(pr[i]){
			for(ll j=i*2;j<=n;j+=i){
				pr[j]=false;
			}
		}
	}
	
	for (ll i=2;i<=n;i++){
		if(pr[i]) v.pb(i);
	}
}


int main()
{
	ll m, t, a, b, c, i;
	memset(pr, true, sizeof(pr));
	cin>>m;
    soe();
    cout<<v[--m]<<endl ;
    
  
   return 0;
}