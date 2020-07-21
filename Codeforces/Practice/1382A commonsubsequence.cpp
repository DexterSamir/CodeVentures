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
   ll t,m,n,x,k;
   string s;

   cin>>t;

   while(t--){
     cin>>m>>n;

     vector<ll>a(n);
     vector<ll>b(m);

     fr(i,n)cin>>a[i];
     fr(i,m)cin>>b[i];

     sort(all(a));
     sort(all(b));
     x=min(m,n);

     bool pos=false;
     fr(i,x){
       if(m<n){
       auto it = find(all(a),b[i]);
       if(it!=a.end()){
          k=b[i];
          pos=true;
          break;
       }
       }
       else{
       auto it = find(all(b),a[i]);
         if(it!=b.end()){
          k=a[i];
          pos=true;
          break;
       }
       }
     }
     if(pos){
        cout<<"YES"<<endl;
        cout<<1<<sp<<k<<endl;
     }
     else cout<<"NO"<<endl;

   }

   return 0;
}
