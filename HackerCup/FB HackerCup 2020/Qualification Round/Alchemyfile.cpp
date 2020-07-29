#include <bits/stdc++.h>
#include <fstream>
using namespace std;
//Author: Ezio Sam
/* Shorthands */
#define ll long long
#define pb push_back
#define em emplace_back
#define mp make_pair
#define sp " "
#define cs "Case #"
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
   ifstream f("in.txt");
   ofstream  g("out.txt");
   ll t,m,n,x,a,b;
   string s;

   f>>t;

   fn(c,t){
      f>>n;

      f>>s;
      map<char,ll>z;

      for(auto c:s){
        z[c]++;
      }
      g<<cs<<c<<": ";
      g<<((abs(z['A']-z['B'])==1)?'Y':'N')<<endl;
      z.clear();
   }

   return 0;
}


