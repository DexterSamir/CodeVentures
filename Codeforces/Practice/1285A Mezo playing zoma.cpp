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
#define Ezio cin.tie(0), cin.sync_with_stdio(0), cout.tie(0), cout.sync_with_stdio(0);
#define db(something)   cerr<<#something<<" - "<<something<<"\n";         
int main()
{
  
   Ezio
   /*Variables*/
   /*Code*/
   int t,l,r;
   string s;
   cin>>t>>s;
   l=r=0;
   for(auto x:s){
     (x=='L'?l--:r++);
   }
   cout<<r-l+1<<endl;
   return 0;
}
    