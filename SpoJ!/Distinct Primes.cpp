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

int DistinctPrime(int n){
  int p[3000]={0};
  
  vector <int> v;
  
  
  for(int i=2;i<3000;i++){
    
    if(p[i]==0){
      p[i] = 1;
      
      for(int j=i*2;j<3000;j+=i){
        p[j]-=1;
        if((p[j]+3)==0){
          v.pb(j);
        }
      }
      
    }
  }
  
  sort(all(v));
  return v[n-1];
}

int main()
{
  
   Ezio
   /*Variables*/
   /*Code*/
   int n,a,x,y,t,s=0;
   
   cin>>t;
   while(t--){
   cin>>n;
   cout<<DistinctPrime(n)<<endl;
   }
   return 0;
}
    