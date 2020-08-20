#include <bits/stdc++.h>
using namespace std;
//Author: Ezio Sam
/* Shorthands */
#define ll long long
#define pb push_back
#define em emplace_back
#define mp make_pair
#define sp " "
#define cs "Case "
#define fi first
#define sn second

/* STL */
#define mem(a,n) memset(a, n, sizeof(a));
#define all(x) x.begin(),x.end()
#define alr(x) x.rbegin(),x.rend()
#define sz(x)  (int)x.size()
#define mx(v)  *max_element(v.begin(),v.end())
#define mxi(v) distance(v.begin(),max_element(v.begin(),v.end()))
#define mxa(a) *max_element(a, a.size())
#define r(a)   reverse(a.begin(),a.end())
/* loops */
#define fr(i,n)   for(__typeof(n) i=0;i<(n);i++)
#define fn(i,n)   for(__typeof(n) i=1;i<=(n);i++)
/*Special*/
#define Ezio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define db(something)  cerr<<#something<<" - "<<something<<"\n";

int main()
{

   Ezio
   char a,b;
   string s;
   ll t;
   cin>>t;
   int dx[]={-2,-2,-1,-1,1,1,2,2};
   int dy[]={-1,1,-2,2,-2,2,-1,1};
   while(t--){
       cin>>a>>b;
       a-='a';
       b-='1';
       ll m=0;
       fr(i,8){
         int r= a + dx[i];
         int c= b + dy[i];

         m+= (r>=0 and r<8 and c>=0 and c<8);
       }
       cout<<m<<endl;
   }

   return 0;
}