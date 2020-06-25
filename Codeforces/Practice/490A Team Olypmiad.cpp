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
#define sz(x)  (int)x.size()
#define mx(v)  *max_element(v.begin(),v.end())
#define mxa(a) *max_element(a, a.size())
#define r(a) reverse(a.begin(),a.end())
/* loops */
#define fr(i,n)   for(__typeof(n) i=0;i<(n);i++)
#define fn(i,n)   for(__typeof(n)i=1;i<=(n);i++)
#define fa(i,a,n) for(__typeof(a)i=(a);i<=(b);i++)
/*Special*/
#define Ezio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define db(something)   cerr<<#something<<" - "<<something<<"\n";         

vector<int>v[4];
int main()
{
  
   Ezio
   int t,n;
   cin>>t;
   fr(i,t){
     cin>>n;
     v[n].pb(i+1);
   }
   
   int z= min({sz(v[1]),sz(v[2]),sz(v[3])});
   cout<<z<<endl;
   if(z==0) return 0;
   fr(i,z){
     cout<<v[1][i]<<sp<<v[2][i]<<sp<<v[3][i]<<endl;
   }
   return 0;
}
    