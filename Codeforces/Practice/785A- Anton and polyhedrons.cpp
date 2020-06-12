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
#define mem(a, n) memset(a, n, sizeof(a));
#define all(x) x.begin(),x.end()
#define sz(x) (int)x.size()
#define mx(v) *max_element(v.begin(),v.end())
#define mxa(a) *max_element(a, a.size())
#define r(a) reverse(a.begin(),a.end())
/* loops */
#define fr(i,n) for(__typeof(n) i=0;i<(n);i++)
#define fn(i,n) for(__typeof(n)i=1;i<=(n);i++)
#define fa(i,a,n) for(__typeof(a)i=(a);i<=(b);i++)

#define Ezio ios::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define db(something)   cout<<#something<<" - "<<something<<"\n";         
int main()
{
	
	Ezio;
   /*Variables */
   ll m, n=0, p, r, t;
   ll a, b, c, d, e;
   double x, y, z;
   string s, ss, sss;
   
   /*Code*/
   cin>>t;
   
   while(t--){
   	cin>>s;
   	
   	if(s[0]=='I' ) n+=20;
   	if(s[0]=='D') n+=12;
   	if(s[0]=='O' ) n+=8;
   	if(s[0]=='C') n+=6;
   	if(s[0]=='T' ) n+=4;
   	
   	
   }
  
   cout<<n<<endl ;
   return 0;
}