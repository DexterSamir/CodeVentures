#include <bits/stdc++.h>
using namespace std;
//Author: Ezio Sam
/* Shorthands */
#define ll unsigned long long
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
#define mem(a,n) memset(a, n, sizeof(a));
#define all(x) x.begin(),x.end()
#define sz(x)  (int)x.size()
#define mx(v)  *max_element(v.begin(),v.end())
#define mxa(a) *max_element(a, a.size())
#define r(a) reverse(a.begin(),a.end())
/* loops */
#define fr(i,n)   for(__typeof(n) i=0;i<(n);i++)
#define fn(i,n)   for(__typeof(n)i=1;i<=(n);i++)
#define fa(i,a,n) for(__typeof(a)i=(a);i<=(b);i++)
/*Special*/
#define Ezio ios::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define db(something)   cerr<<#something<<" - "<<something<<"\n";         
int main()
{
  
   Ezio
   /*Variables*/
   /*Code*/
   ll n,x;
   vector<ll>v;
   ll ans=1;
   const ll m=1e18;
   int i;
   cin>>n;
   
   fr(i,n){
     cin>>x;
     if(x==0){
       cout<<0;
       return 0;
       }
     v.pb(x);
   }
   
   sort(all(v));
   
   fr(i,n){
     if(ans<=m/v[i])
     ans*=v[i];
     
     else{
       cout<<"-1"<<endl;
       return 0;
       }
   }
     
   cout<<ans<<endl;
   return 0;
}
    