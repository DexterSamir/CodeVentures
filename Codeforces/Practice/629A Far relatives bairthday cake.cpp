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
ll row[200000],col[200000];
int main()
{
  
   Ezio
   ll t,m(0),n,x,a,b;
   string s;
   char c;
   cin>>n;
   
   fr(i,n){
     fr(j,n){
       cin>>c;
       if(c=='C'){
         row[i]++;
         col[j]++;
       }
     }
   }
   
   fr(i,n){
     m+=( row[i]*(row[i]-1))/2;
   }
   
   fr(i,n){
     m+=( col[i]*(col[i]-1))/2;
   }
   
   cout<<m<<endl;
   
   return 0;
}
    