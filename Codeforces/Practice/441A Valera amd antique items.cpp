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
#define fa(i,a,n) for(i=a;i<=b;i++)
/*Special*/
#define Ezio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define db(something)  cerr<<#something<<" - "<<something<<"\n";         

int main()
{
  
   Ezio
   ll t,m,n,x,a,b(0),v;
   string s;
   
   cin>>n>>v;
   vector<ll>z;
   fr(i,n){
     cin>>x;
     bool an=false;
     fr(j,x){
       cin>>a;
       if(v>a){
         an=true; 
       }
     }
     
     if(an)z.em(i+1);
   }
   
   cout<<z.size()<<endl;
   fr(i,sz(z)){
     if(i)cout<<sp;
     cout<<z[i];
   }
   return 0;
}
    