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
#define fa(i,a,n) for(long long  i=a;i<=b;i++)
/*Special*/
#define Ezio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define db(something)  cerr<<#something<<" - "<<something<<"\n";         

int main()
{
  
   Ezio
   ll t,m,n,x,b(0);
   string s;
   char c;
   cin>>n>>m;
   ll a[1000][1000];
   fr(i,n){
     fr(j,m){
        cin>>c;
        a[i][j]= c-'0';
        
     }
   }
   
   fr(i,n){
     bool pos=false;
     fr(j,m){
       bool high=true;
       fr(k,n){
         if(a[k][j]>a[i][j]) {
           high=false;
           break;
         }
       }
       if(high){
         pos=true;
         break; 
       }
     }
     if(pos) b++;
   }
   cout<<b<<endl;
   return 0;
}
    