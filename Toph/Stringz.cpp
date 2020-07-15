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
bool iss(string s, string t) {
        unordered_map<char, vector<int>> pos;
        for (int k = 0; k < t.size(); ++k)
            pos[t[k]].push_back(k);
        
        int i = 0, j = -1;
        while (i < s.size()) {
            auto c = s[i];
            auto it = upper_bound(pos[c].begin(), pos[c].end(), j);
            if (it == pos[c].end()){
                pos.clear() ;
                return false;}
            j = *it;
            ++i;
        }
        pos.clear();
        return true;
 }
int main()
{
  
   Ezio
   ll t,m,n,x,i,j;
   string s,k;
   
   cin>>n>>s>>t;
   
   while(t--){
     cin>>k;
     bool is;
     is=iss(k,s);
     cout<<(is?"YES":"NO")<< endl;
   }
   
   return 0;
}
    