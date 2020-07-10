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
#define fn(i,n)   for(__typeof(n)i=1;i+1<(n);i++)
#define fa(i,a,n) for(int  i=a;i<=b;i++)
/*Special*/
#define Ezio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define db(something)  cerr<<#something<<" - "<<something<<"\n";         
int dx[6]={0,0,1,1,-1,-1};
int dy[6]={0,0,1,-1,1,-1};
int main()
{
  
   Ezio
   ll t,m,n;
   string s;
   
   cin>>n;
   char a[n+10][n+10];
   fr(i,n){
     fr(j,n){
       cin>>a[i][j];
     }
   }
   m=0;
   for(int i=1;i+1<n;i++){
     for(int j=1;j+1<n;j++){
       bool cross=true;
       for(int k=0;k<6;k++){
         if(a[i+dx[k]][j+dy[k]]=='.') {
           cross=false;
           break;
          }
        }
        
      if(cross)m++;
      }
   }
   
   cout<<m<<endl;
   return 0;
}
    