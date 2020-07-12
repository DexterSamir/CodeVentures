#include <bits/stdc++.h>
using namespace std;
//Author: Ezio Sam
/* Shorthands */
#define ll long long
#define pb push_back 
#define mp make_pair
#define sp " "
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
#define alr(x) x.rbegin(),x.rend()
#define sz(x)  (int)x.size()
#define mx(v)  *max_element(v.begin(),v.end())
#define mxi(v) distance(v.begin(),max_element(v.begin(),v.end()))
#define mxa(a) *max_element(a, a.size())
#define r(a) reverse(a.begin(),a.end())
/* loops */
#define fr(i,n)   for(__typeof(n) i=0;i<(n);i++)
#define fn(i,n)   for(__typeof(n)i=1;i<=(n);i++)
#define fa(i,a,n) for(int  i=a;i<=b;i++)
/*Special*/
#define Ezio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define db(something)  cerr<<#something<<" - "<<something<<"\n";         

int main()
{
  
   Ezio
   ll t,m,n,x,a,b;
   string s;
   
   cin>>t;
   
   while(t--){
     cin>>n;
     if(n%2){
     vector<ll>v;
     
     for(ll i=1;i<=sqrt(n);i++){
       if(n%i==0){
       v.pb(i);
       if(n/i!=n)
       v.pb(n/i);
      }
     }
     vector<pair<ll,ll> >l;
     for(auto i:v){
       
       m= __gcd(i,n-i);
       x= (i*(n-i))/m;
       l.pb(mp(x,i));
     }
     sort(all(l));
     cout<<l[0].second<<sp<<n-l[0].second<<endl;
     l.clear();
     v.clear();
     }
     else cout<<n/2<<sp<<n/2<<endl;
   }
   
   return 0;
}
    