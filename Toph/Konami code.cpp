#include <bits/stdc++.h>
using namespace std;
//Author: Ezio Sam
#define ll long long
#define pb push_back 
#define sp " "
#define s string
#define fr(i,n) for(i=0;i<n;i++)
#define fn(i,n) for(i=1;i<=n;i++)
#define fa(i,a,n) for(i=a;i<=n;i++)

int main()
{
	string s, ss="UUDDLRLRBA";
	int r=0, i;
    cin>>s;
    
    int n = s.size();
    int m = ss.size();
    
    fr(i,n){
    	if(s.substr(i,m)==ss){
    		r++;
    	}
    }
    cout<<r;
    
    
   return 0;
}