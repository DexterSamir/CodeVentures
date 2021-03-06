#include <bits/stdc++.h>
using namespace std;
//Author: Ezio Sam
/* Shorthands */
#define ll long long
#define pb push_back 
#define mp make_pair
#define sp " "
#define fi first
#define sn second 
/* STL */
#define vi vector<int>v
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mem(a, n) memset(a, n, sizeof(a));
#define all(x) x.begin(),x.end()
#define sz(x) (int)x.size()
/* loops */
#define fr(i,n) for(i=2;i<=sqrt(n)+2;i++)
#define fn(i,n) for(i=1;i<=n;i++)
#define fa(i,a,n) for(i=a;i<=n;i++)
/* inputs */
#define si(n)               scanf("%d", &n)
#define sl(n)               scanf("%lld", &n)
#define sii(a, b)           scanf("%d %d", &a, &b)
#define sll(a, b)           scanf("%lld %lld", &a, &b)
#define siii(a, b, c)       scanf("%d %d %d", &a, &b, &c)
#define slll(a, b, c)       scanf("%lld %lld %lld", &a, &b, &c)
#define siiii(a, b, c, d)   scanf("%d %d %d %d", &a, &b, &c, &d)
#define sllll(a, b, c, d)   scanf("%lld %lld %lld %lld", &a, &b, &c, &d)
   
#define Ezio ios::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define debugg(something)   cout<<#something<<" - "<<something<<"\n";         
ll i;
bool isPrime(ll x){
	fr(i,x){
		if(x%i==0) return true ;
	}
	return false ;
}
int main()
{
	int n, m, t, a, b, c, i, j;
	
    si(t);
    
    while(t--){
    	cin>>n; 
    	a=n-1; b=n+1;
    	while(isPrime(a)){
    		a--;
    	}
    	cout<<a;
    	while(isPrime(b)){
    		b++;
    	}
    	cout<<sp<<b<<endl ;
    }
    
   return 0;
}