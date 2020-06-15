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
#define pll pair<ll,ll>  
#define vi  vector<int> v;
#define pii pair<int,int>
#define sz(x)    (int)x.size()
#define all(x)   x.begin(),x.end()
#define mxa(a)   *max_element(a, a.size())
#define r(a)     reverse(a.begin(),a.end())
#define mem(a,n) memset(a, n, sizeof(a));
#define mx(v)    *max_element(v.begin(),v.end())


/* loops */
#define fr(i,n)   for(__typeof(n) i=0;i<(n);i++)
#define fn(i,n)   for(__typeof(n)i=1;i<=(n);i++)
#define fa(i,a,n) for(int i=a;i<=b;i++)

#define Ezio ios::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define db(something)   cerr<<#something<<" - "<<something<<"\n";         
int main()
{
  
   Ezio
   /*Variables */
   int m, n, p, r, t;
   int a, b, c, d, e;
   double x, y, z;
   string s, ss, sss;
   
   /*Code*/
   cin>>t;
   
   while(t--){
     cin>>a>>b>>c;
     cin>>n;
     
     d = max({a,b,c});
     n-=(d-a);
     n-=(d-b);
     n-=(d-c);
     
     cout<<((n<0||n%3)?"NO":"YES")<<endl;
   }
   
  
   
   return 0;
}