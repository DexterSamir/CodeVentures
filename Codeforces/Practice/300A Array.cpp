#include <bits/stdc++.h>
using namespace std;
//Author: Ezio Sam
/* Shorthands */
#define ll long long
#define pb push_back 
#define em emplace_back
#define mp make_pair
#define sp " "
#define cs "Case "
#define fi first
#define sn second 

/* STL */
#define mem(a,n) memset(a, n, sizeof(a));
#define all(x) x.begin(),x.end()
#define alr(x) x.rbegin(),x.rend()
#define sz(x)  (int)x.size()
#define mx(v)  *max_element(v.begin(),v.end())
#define mxi(v) distance(v.begin(),max_element(v.begin(),v.end()))
#define mxa(a) *max_element(a, a.size())
#define r(a)   reverse(a.begin(),a.end())
/* loops */
#define fr(i,n)   for(__typeof(n) i=0;i<(n);i++)
#define fn(i,n)   for(__typeof(n) i=1;i<=(n);i++)
#define fa(i,a,n) for(long long  i=a;i<=b;i++)
/*Special*/
#define Ezio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define db(something)  cerr<<#something<<" - "<<something<<"\n";         

int main()
{
  
   Ezio
   ll t,m,n,x;
   string s;
   
   cin>>n;
   vector<ll>a;
   vector<ll>b;
   vector<ll>c;
   
   fr(i,n){
     cin>>m;
     
     if(m==0){
       c.em(m);
     }
     else if(m>0){
       a.em(m);
     }
     else if(m<0){
       b.em(m);
     }
   }
   
   if(sz(a)==0){
     a.em(b.back());
     b.pop_back();
     a.em(b.back());
     b.pop_back();
   }
   if(sz(b)%2==0){
     c.em(b.back());
     b.pop_back();
   }
   
   cout<<b.size(); 
   
   for(auto i:b)cout<<sp<<i;
   cout<<endl;
   
   cout<<a.size();
   for(auto i:a)cout<<sp<<i;
   cout<<endl;
   
   cout<<c.size();
   for(auto i:c)cout<<sp<<i;
   cout<<endl;
   return 0;
}
    