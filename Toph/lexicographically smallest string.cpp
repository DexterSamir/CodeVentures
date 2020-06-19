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
int main()
{
  
   Ezio
   /*Variables*/
   /*Code*/
   int n,k;
   cin>>n>>k;
   string s;
   cin>>s;
   char cc;
   map<char, int> mp;
   for(auto x:s) mp[x]++;
   for(auto it='z';it>='a';it--){
       if(mp[it]==k && k){
         cc=it;
         break;
       }
       
   }
   bool on=true;
   for(auto x:s){
     
     if(x==cc &&k>1){
       if(x<(++x) && on){
         cout<<x;
         on=false;
        }
        else
        k--;
     }
     else cout<<x;
   }
   cout<<endl;
  
   return 0;
}
    