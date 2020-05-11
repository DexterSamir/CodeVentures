#include <bits/stdc++.h>
using namespace std;
//Author: Ezio Sam
#define ll long long
#define pb push_back 
#define sp " "
#define s string
#define fr(i,n) for(i=2;i<=n;i++)
#define fn(i,n) for(i=1;i<=n;i++)
#define fa(i,a,n) for(i=a;i<=n;i++)
bool isp(int n){
	int k =sqrt (n), i;
	
	fr(i, k){
		if(n%i==0) return false;
		
	}
	
	return true ;
}
int main()
{
	ll n, m, t, a, b=1, c, i;
	
    cin>>n;
    
    while(n--){
    	cin>>a;
    	
        bool p;
        
        p= isp(a);
        
        if(p) cout<<"yes"<<endl ;
        else  cout<<"no"<<endl ;
    }
    
   return 0;
}