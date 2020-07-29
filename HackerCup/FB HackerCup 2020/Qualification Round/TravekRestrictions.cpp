#include <bits/stdc++.h>
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
#define fa(i,a,n) for(long long  i=a;i<=b;i++)
/*Special*/
#define Ezio ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define db(something)  cerr<<#something<<" - "<<something<<"\n";

int main()
{

   Ezio
   ll t,m,n,x,a,b;
   string in,out;
   cin>>t;
   fn(c,t){
     cin>>n;
     cin>>in>>out;
     ll v[2000][2000]={0};

     fr(i,n){
         v[i][i]=1;

         if(in[i]=='Y'){
           if(i==0){
             if(out[i+1]=='Y')
             v[i+1][i]=1;
           }
           else if(i==n-1){
             if(out[i-1]=='Y')
             v[i-1][i]=1;
           }
           else{
             if(out[i+1]=='Y')
             v[i+1][i]=1;
             if(out[i-1]=='Y')
             v[i-1][i]=1;
           }
         }


         if(out[i]=='Y'){
           if(i==0){
             if(in[i+1]=='Y')
             v[i][i+1]=1;
           }
           else if(i==n-1){
             if(in[i-1]=='Y')
             v[i][i-1]=1;
           }
           else{
             if(in[i+1]=='Y')
             v[i][i+1]=1;
             if(in[i-1]=='Y')
             v[i][i-1]=1;
           }
         }

       }

       fr(i,n){
         fr(j,n){
            if(v[i][j]!=1 and i!=j){
                v[i][j]= 9999;
            }
         }
       }

       //FloydWarshall

       fr(k,n){
         fr(i,n){
           fr(j,n){
             if(v[i][k] + v[k][j] < v[i][j]){
               v[i][j]= v[i][k] + v[k][j];
             }
           }
         }
       }

       //printer
       cout<<cs<<c<<":"<<endl;
       fr(i,n){
         fr(j,n){
           if(v[i][j]!=9999 or i==j){
             cout<<"Y";
           }
           else cout<<"N";
         }
         cout<<endl;
       }


     }

   return 0;
}
