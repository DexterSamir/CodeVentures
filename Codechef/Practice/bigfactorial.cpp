#include <bits/stdc++.h>
using namespace std;
//Author: Ezio Sam
#define ll long long
#define pb push_back 
#define mp make_pair
#define sp " "
#define vi vector<int>v
#define mem(a, n) memset(a, n, sizeof(a));
#define fr(i,n) for(i=0;i<n;i++)
#define fn(i,n) for(i=1;i<=n;i++)
#define fa(i,a,n) for(i=a;i<=n;i++)
#define si(n)               scanf("%d", &n)
#define sl(n)               scanf("%lld", &n)
#define sii(a, b)           scanf("%d %d", &a, &b)
#define sll(a, b)           scanf("%lld %lld", &a, &b)
#define siii(a, b, c)       scanf("%d %d %d", &a, &b, &c)
#define slll(a, b, c)       scanf("%lld %lld %lld", &a, &b, &c)
#define siiii(a, b, c, d)   scanf("%d %d %d %d", &a, &b, &c, &d)
#define sllll(a, b, c, d)   scanf("%lld %lld %lld %lld", &a, &b, &c, &d)
         
int main()
{
	int n, m, t, a[200], b, c, i, j;
	
    si(t);
    
    while(t--){
    	si(n);
    	a[0]=1;
    	m=1;
    	
    	fn( i, n){
    		fr( j, m){
    			int p= a[j]*i+c;
    			a[j]= p%10;
    			c=p/10;
    		}
    		
    		while(c){
    			a[m++] = c%10;
    			c/=10;
    		}
    	}
    	for(int i =m-1 ; i>=0;i--){
    		cout<<a[i];
        }
        
        cout<<endl;
    	
    }
    
   return 0;
}