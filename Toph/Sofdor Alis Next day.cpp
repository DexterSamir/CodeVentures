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
#define sz(x)  (int)x.size()
#define mx(v)  *max_element(v.begin(),v.end())
#define mxa(a) *max_element(a, a.size())
#define r(a) reverse(a.begin(),a.end())
/* loops */
#define fr(i,n)   for(__typeof(n) i=0;i<(n);i++)
#define fn(i,n)   for(__typeof(n)i=1;i<=(n);i++)
#define fa(i,a,n) for(__typeof(a)i=(a);i<=(b);i++)
/*Special*/
#define Ezio ios::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define db(something)   cerr<<#something<<" - "<<something<<"\n";         
int main()
{
  
   Ezio
   /*Variables*/
   /*Code*/
   int d,m,y,t;
   string s[]={"M","Jan,","Feb,","Mar,","Apr,","May,","Jun,","Jul,","Aug,","Sep,","Oct,","Nov,","Dec,"};
   cin>>t;
   
   while(t--){
     cin>>d>>m>>y;
     d++;
     if(m==1 or m==3 or m==5 or m==7 or m==8 or m==10){
       if(d>31){
         d=1;
         m++;
        }
       
      }
      
      else if(m==2){
           if(y%100 and (y%4==0 or y%400==0)){
             if(d>29){
               d=1;
               m++;
             }
            }
            else{
               if(d>28){
                 d=1;
                 m++;
             }
           }
      
       }
       else if( m==4 or m==6 or m==9 or m==11)
       {
          if(d>30){
            d=1;
            m++;
          }
        }
       else if(m==12){
     
            if(d>31 ){
              d=1;
              m=1;
              y++;
       
            }
        }
       
        
      if(d<10){
        cout<<"0"<<d<<sp<<s[m]<<sp<<y<<endl;
      }
      else{
        cout<<d<<sp<<s[m]<<sp<<y<<endl;
      }
     
   }
   return 0;
}
    