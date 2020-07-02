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
     vector<int>v(n);
     for(auto &x:v)cin>>x;
     bool sing=false;
     fr(i,n){
       if(v[i]%2==0){
         cout<<1<<endl<<i+1<<endl;
         sing=true;
         break;
       }
     }
     
     fr(i,n){
       fr(j,i){
       if(sing) break;
       if((v[i]+v[j])%2==0){
         sing=true;
         cout<<2<<endl<<j+1<<sp<<i+1<<endl;
         break;
         
       }
       }
     }
     
     if(!sing)cout<<-1<<endl;
   }
   return 0;
}
    