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

int main()
{
  
   Ezio
   ll t,m,n,x,a,b,c;
   string s="///////////???????";
   
   cin>>t;
   while(t--){
     cin>>n>>x;
     
     vector<ll>v(n);
     vector<ll>a(n);
     fr(i,n){cin>>v[i];a[i]=v[i];}
     sort(all(v));
     sort(all(a));
     c=0;
     
     while(true){
       //part 1 : cure all country that has affected more or equal than cure
       bool cure=true;
       fr(i,n){
         if(v[i]>=x){
           v[i]= (v[i]>x? (v[i]-x):0 );
           x*=2;
           cure=false;
           break;
         }
       }
       //part 2: cure all country in 1 day that has affected less than cure
       if(cure){
         for(ll i=n-1;i>=0;i--){
           if(x>=v[i] and v[i]) {
             x=v[i]*2;
             v[i]=0;
             cure=false;
             break;
           }
         }
       }
       //part 3: check all country if no affected quit or double affected
       bool off=true;
       cout<<"Day "<<c+1<<sp<<endl;
       fr(i,n){
         if(v[i]>0){ 
         off=false;
         v[i]*=2;
         if(v[i]>=a[i]) v[i]=a[i];
         }
         cout<<v[i]<<sp;
       }
       cout<<endl;
       c++;
       if(off) break;
     }
     cout<<c<<endl;
   }
   return 0;
}
    
    
    
    
    
/*
3

5 5
1 2 3 4 5
5 1
40 30 20 10 50
3 10
20 1 110
*/