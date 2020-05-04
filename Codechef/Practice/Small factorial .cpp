#include <bits/stdc++.h>
using namespace std;
//Author: Ezio Sam
#define ll long long
#define pb push_back 
#define sp " "
#define s string
#define z size()
int main()
{
	ll n, a, fac;
	cin>>n;
	
	while(n--){
		cin>>a;
		
		fac=1;
		for(int i=1;i<=a;i++) {
			fac*=i;
		}
		cout<<fac<<endl;
	}
	
    
    
   return 0;
}