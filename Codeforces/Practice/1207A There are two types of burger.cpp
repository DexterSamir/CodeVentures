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
   int t,m,n,x,a,b,bb,cb;
   string s;
   
   cin>>t;
   while(t--){
     cin>>x>>n>>m;
     cin>>a>>b;
     x/=2;
     int an=0;
     if(a>b){
        bb=min(x,n);
        an=(bb*a);
        x-=bb;
        if(x>0){
        cb=min(x,m);
        an+=(cb*b);
        }
     }
     else{
       cb=min(x,m);
       an=(cb*b);
       x-=cb;
       if(x>0){
       bb=min(x,n);
       an+=(bb*a);
       }
     }
     
     cout<<an<<endl;
     
   }
   
   return 0;
}
    