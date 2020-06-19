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
    int i, j, t, m,  k;
   
   ll a,b,c,d,n,e;
   
   string s;
   
   cin>>t;
   
   while(t--){
     cin>>a>>b>>n;
     
     if(a>b)swap(a,b);
     c=0;
     if(a>n||b>n){ 
       cout<<c<<endl;
       continue;
     }
     while(1){
       a+=b;
       c++;
       if(a>n) break;
       swap(a,b);
     }
     cout<<c<<endl;
     }
   return 0;
}
    