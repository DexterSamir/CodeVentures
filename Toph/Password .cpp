#include <bits/stdc++.h>
using namespace std;
//Author: Ezio Sam
/* Shorthands */
#define ll long long
#define pb push_back 
#define mp make_pair
#define sp ": "
#define cs "Case "
#define fi first
#define sn second 
#define po(x) x*x
/* STL */
#define vi vector<int>v
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mem(a, n) memset(a, n, sizeof(a));
#define all(x) x.begin(),x.end()
#define sz(x) (int)x.size()
#define mx(v) *max_element(v.begin(),v.end())
#define mxa(a) *max_element(a, a.size())
#define r(a) reverse(a.begin(),a.end())
/* loops */
#define fr(i,n) for(i=0;i<n;i++)
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
int main()
{
   /*Variables */
   string s;
   bool lc=false, uc=false, nm=false ;
   int i, p=0;
   while(cin>>s){
   			p=0;
   			uc=false;
   			lc=false;
   			nm=false;
   	fr(i, sz(s)){
   		if(s[i]>='A' && s[i]<='Z' ){
   			uc=true;
   		}
   		if(s[i]>='a' && s[i]<='z' ){
   			lc=true;
   		}
   		if(s[i]>='0' && s[i]<='9' ){
   			nm=true;
   		}
   		
   		if(uc && lc && nm){
   			p++;
   			uc=false;
   			lc=false;
   			nm=false;
   		}
   	}
   	
   	cout<<p<<endl ;
   }
   
   
   return 0;
}