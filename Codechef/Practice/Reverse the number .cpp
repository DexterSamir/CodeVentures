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
    s ss;
    while(n--)
    {
    	cin>>ss;
    	reverse(ss.begin(),ss.end());
    	int k=0;
    	for(int i=0;i<ss.size();i++) {
    		if(ss[i]!='0') {
    			k=i;break;
    		}
    	}
    	
    	for(int i=k;i<ss.size();i++) {
    		cout<<ss[i];
    	}
    	
    	cout<<endl ;
    }
    
   return 0;
}