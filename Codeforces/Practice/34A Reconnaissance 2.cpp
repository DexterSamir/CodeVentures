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
bool bysec(const pair <ll,ll>&a,const pair <ll,ll> &b){

  return a.second<b.second;
}

int main()
{
  
   Ezio
   ll t,m,n,x,a,b,c,d;
   string s;
   
   cin>>n;
   vector< pair<ll,ll> >v;
   fr(i,n){
     cin>>a;
     v.pb(mp(i+1,a));
   }
   m=abs(v[1].sn-v[0].sn);
   c=v[1].fi;
   d=v[0].fi;
   for(ll i=2;i<n;i++){
     x=abs(v[i].sn - v[i-1].sn);
     if(x<m){
       c=v[i].fi;
       d=v[i-1].fi;
       m=x;
     }
   }
   x=abs(v[n-1].sn - v[0].sn);
   if(x<m){
     c=v[n-1].fi;
     d=v[0].fi;
   }
   cout<<c<<sp<<d<<endl;
   return 0;
}
    