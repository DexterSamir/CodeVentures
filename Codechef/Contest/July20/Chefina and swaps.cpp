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
   ll t,m,n,x,y,a,b;
   string s;
   
   cin>>t;
   while(t--){
     cin>>n;
     
     vector<ll>a(n);
     vector<ll>b(n);
     map<ll,ll>ma;
     map<ll,ll>mb;
     map<ll,ll>mm;
     vector<ll>c;
     vector<ll>d;
     
     fr(i,n){
       cin>>a[i];
       ma[a[i]]++;
       mm[a[i]]++;
     }
     
     fr(i,n){
       cin>>b[i];
       mb[b[i]]++;
       mm[b[i]]++;
     }
     bool no=false;
     bool ekbar=true;
     ll it;
     for(auto i:mm){
       if(ekbar){
         it=i.fi;
         ekbar=false;
       }
       if(i.sn%2){ no=true; break; }
       
         if(ma[i.fi]>(i.sn/2)){
           ll k=ma[i.fi]- (i.sn/2);
           
           while(k--){
             c.pb(i.fi);
           }
         }
         if(mb[i.fi]>(i.sn/2)){
           ll k=mb[i.fi]- (i.sn/2);
           
           while(k--){
             d.pb(i.fi);
           }
         }
         
     }
     if(no){ cout<<-1<<endl; continue ;}
     sort(all(c));
     sort(alr(d));
     ll su=0;
     
     fr(i,sz(c)){
       su+=min(min(c[i],d[i]),it*2);
     }
     cout<<su<<endl;
     mm.clear();
     c.clear();
     d.clear();
     ma.clear();
     mb.clear();
     a.clear();
     b.clear();
   }
   return 0;
}
    