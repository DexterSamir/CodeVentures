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
#define mem(a,n) memset(a, n, sizeof(a));
#define all(x) x.begin(),x.end()
#define sz(x)  (int)x.size()
#define mx(v)  *max_element(v.begin(),v.end())
#define mxa(a) *max_element(a, a.size())
#define r(a) reverse(a.begin(),a.end())
/* loops */
#define fr(i,n)   for(__typeof(n) i=0;i<(n);i++)
#define fn(i,n)   for(__typeof(n)i=1;i<=(n);i++)
/*Special*/
#define Ezio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define db(something)   cerr<<#something<<" - "<<something<<"\n";         
int main()
{
  
   Ezio
   int t;
   ll n;
   cin>>t;
   vi;
   while(t--){
     cin>>n;
     v.clear();
     if(n%4){
       cout<<"NO"<<endl;
       continue ;
     }
     else{
       cout<<"YES"<< endl;
       for(int i =2;i<=n;i+=2)v.pb(i);
       for(int i =1;i<n-1;i+=2) v.pb(i);
       
       v.pb(n-1+n/2);
       fr(i,n)cout<<v[i]<<(i<(n-1)?" ":"\n");
     }
   }
   return 0;
}
    