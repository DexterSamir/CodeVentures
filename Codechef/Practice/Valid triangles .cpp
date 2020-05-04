#include <bits/stdc++.h>
using namespace std;
//Author: Ezio Sam
#define ll long long
#define pb push_back 
#define sp " "
#define s string

int main()
{
	ll n, a, b, c;
	
    cin>>n;
    
    while (n--){
    	cin>>a>>b>>c;
    	
    	if(a+b+c==180 && a<180 && b<180 && c<180){
    		cout<<"YES"<<endl;
    	}
    	else
    	cout<<"NO"<<endl ;
    }
    
   return 0;
}
