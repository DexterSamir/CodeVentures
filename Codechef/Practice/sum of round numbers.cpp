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
	int n, m, t, a, b, c, i, j;
	
    si(t);
    
    while(t--){
    	cin>>n;
    	if(n%10==0){
    		cout <<1<<endl<<n<<endl ;
    	}
    	else {
    		string str= to_string(n);  
    		a= str.size();
    		if(a==4){
    			cout<<4<<endl ;
    			cout<<a[0]<<000<<sp<<a[1]<<00<<sp<<a[2]<<0<<sp<<a[3]<<endl ;
    		}
    		else if(a==3){
    			cout<<3<<endl ;
    			cout<<a[0]<<00<<sp<<a[1]<<0<<sp<<a[2]<<endl ;
    		}
    		else if(a==2){
    			cout<<2<<endl ;
    			cout<<a[0]<<0<<sp<<a[1]<<endl ;
    		}
    	}
    }
    
   return 0;
}