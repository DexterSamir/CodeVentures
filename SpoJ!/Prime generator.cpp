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
#define fa(i,a,n) for(__typeof(a)i=(a);i<=(b);i++)
/*Special*/
#define Ezio ios::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define db(something)   cerr<<#something<<" - "<<something<<"\n";         
vi;

void simpleSiev(int n){
  bool p[n+1];
  mem(p,1);
  for(int i=2 ;i<=n;i++){
    if(p[i]){
      v.pb(i);
      for(int j=i;j<=n;j+=i){
        p[j]=0;
      }
    }
  }
  
}

void segmentedSiev(int l,int h){
  int limit= floor(sqrt(h))+1;
  simpleSiev(limit);
  int n = h-l +1;
  bool p[n+1];
  mem(p,1);
  for(int i=0;i<v.size();i++){
    
    int lr= floor(l/v[i])*v[i];
    
    if(lr<l) lr+=v[i];
    
    if(lr==v[i]) lr+=v[i];
    
    for(int j= lr; j<=h;j+=v[i]){
       p[j-l]=0;
    }
  }
  
  for(int i=l;i<=h;i++){
    if(p[i-l] and i>1) cout<<i<<endl;
  }
}

int main()
{
  
   Ezio
   ll t;
   cin>>t;
   
   while(t--){
   ll a,b;
   cin>>a>>b;
   segmentedSiev(a,b);
   
   cout<<endl;
   v.clear();
   }
   return 0;
}
    