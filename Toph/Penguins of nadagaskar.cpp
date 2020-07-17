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
   string s,c;
   
   cin>>n>>s;
   vector<ll>v[50];
   
   fr(i,n) { v[s[i]-'a'].emplace_back(i); }
   
   cin>>t;
   
   while(t--){
      cin>>c;
      bool penguin=true;
      ll index= -1;
      for(auto i:c){
        auto it = upper_bound(all(v[i-'a']),index);
        
        if(it==v[i-'a'].end()){
          penguin=false;
          break;
        }
        else index = *it;
      }
      
      cout<<(penguin?"YES":"NO")<<endl;
      //v.clear();
   }
   
   return 0;
}
    