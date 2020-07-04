#include <bits/stdc++.h>
using namespace std;
//Author: Ezio Sam
/* Shorthands */
#define ll long long
#define pb push_back 
#define mp make_pair
#define sp " "
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
#define alr(x) x.rbegin(),x.rend()
#define sz(x)  (int)x.size()
#define mx(v)  *max_element(v.begin(),v.end())
#define mxi(v) distance(v.begin(),max_element(v.begin(),v.end()))
#define mxa(a) *max_element(a, a.size())
#define r(a) reverse(a.begin(),a.end())
/* loops */
#define fr(i,n)   for(__typeof(n) i=0;i<(n);i++)
#define fn(i,n)   for(__typeof(n)i=1;i<=(n);i++)
#define fa(i,a,n) for(int  i=a;i<=b;i++)
/*Special*/
#define Ezio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define db(something)  cerr<<#something<<" - "<<something<<"\n";         
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
 char c[552][552];
int main()
{
  
   Ezio
   int t,m,n,x,a,b;
   string s;
   
   cin>>n;
  
   
   fn(i,n){
     cin>>(c[i]+1);
   }
   
  
   bool apple=true;
   fn(i,n){
     fn(j,n){
       m=0;
       fr(k,4){
         if(c[i+dx[k]][j+dy[k]]=='o') m++;
       }
       
       if(m%2!=0){
         apple=false;
        
       }
     }
   }
   
   cout<<(apple?"YES":"NO")<<endl;
   return 0;
}
    