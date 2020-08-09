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
#define fa(i, a, b) for (auto (i) = (a); (i) < (b); ++(i))
#define fr(i,n)   for(__typeof(n) i=0;i<(n);i++)
#define fn(i,n)   for(__typeof(n) i=1;i<=(n);i++)
/*Special*/
#define Ezio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define db(something)  cerr<<#something<<" - "<<something<<"\n";

int main()
{

   Ezio
   ll t,m,n,x,a,b;
   string s;

   vector<string>v(4);

   fr(i,4)cin>>v[i];

   for (ll i=0 ;i<=2;i++){
       for (ll j= 0;j<=2;j++){
           m=0;
           for (ll k=0 ;k<2;k++){
               for (ll l=0 ;l<2;l++){
                   if(v[i+k][j+l]=='#') m++;
               }
           }
           if(m!=2){
            cout<<"YES"<<endl;
            return 0;
           }
       }
   }
   cout<<"NO"<<endl;
   return 0;
}
