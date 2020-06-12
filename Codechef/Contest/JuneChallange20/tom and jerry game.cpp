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
	
	Ezio;
   /*Variables */
   int m, n, p, r, t;
   ll a, b, c, d, e;
   double x, y, z;
   string s, ss, sss;
   
   /*Code*/
       cin>>t;
       
       while(t--){
       	
   	cin>>a;
   	
   	if(a&1){
   		cout<<a/2<<endl ;
   	}
   	else{
   		c=a-2;
   		d=0;
   		while(c){
   			b=a;
   			e=c;
   			b/=2; e/=2;
   			while(b%2==0 && e%2==0){
   				b/=2;
   				e/=2;
   	
   			}
   			if(b&1  && (! (e&1))) d++;
   			c-=2;
   			
   		}
   	    	
   	    cout<<d<<endl ;
   	}
      }
  
   
   return 0;
}