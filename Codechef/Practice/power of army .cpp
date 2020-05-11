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
	int n, m, t,b, c, i, j;
    
    si(t);
    
    while(t--){
       cin>>m;
       int a[m];
       fr(i, m){
       	cin>>a[i];
       	
       }
       
       sort(a, a+m);
       
       cout<<a[m-1]-a[0]<<endl ;
    }
    
   return 0;
}