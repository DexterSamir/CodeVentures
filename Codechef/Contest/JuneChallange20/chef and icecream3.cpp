#include <bits/stdc++.h>
using namespace std;
//Author: Ezio Sam
/* Shorthands */
#define ll long long
#define pb push_back 
#define mp make_pair
#define sp ": "
#define cs "Case "
#define fi first
#define sn second 
#define po(x) x*x
/* STL */
#define vi vector<int>v
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mem(a, n) memset(a, n, sizeof(a));
#define all(x) x.begin(),x.end()
#define sz(x) (int)x.size()
#define mx(v) *max_element(v.begin(),v.end())
#define mxa(a) *max_element(a, a.size())
#define r(a) reverse(a.begin(),a.end())
/* loops */
#define fr(i,n) for(__typeof(n) i=0;i<(n);i++)
#define fn(i,n) for(__typeof(n)i=1;i<=(n);i++)
#define fa(i,a,n) for(__typeof(a)i=(a);i<=(b);i++)

#define Ezio ios::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define db(something)   cout<<#something<<" - "<<something<<"\n";         
int main()
{
   /*Variables */
   int m, n, p, r, t;
   ll a, b, c, d, e;
   double x, y, z;
   string s, ss, sss;
   
   /*Code*/
   cin>>t;
   while(t--){
   	cin>>m;
   	bool pay=false;
   	a=b=c=0;
   	fn(i, m){
   		cin>>n;
   		if(n==5){
   			a++;
   		}
   		else if(n==10){
   			if(!a) pay=true;
   			else {
   				a--;
   				b++;
   			}
   		}
   		else if(n==15){
   			if(a>1 || b){
   				if(b>0) {
   					b--;
   					continue;
   				}
   				else{
   					a-=2;
   				}
   			}
   			else {
   				pay=true;
   			}
   		}
   	}
   	
   	if(pay)cout<<"NO"<<endl ;
  	 else cout<<"YES"<<endl ;
   }
  
   
   return 0;
}
