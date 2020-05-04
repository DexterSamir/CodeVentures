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
	string s;
    cin>>n;
    
    while(n--){
    	cin>>s;
    	
    	int l = s.size();
    	l/=2;
    	reverse (s.begin(),s. begin()+l);
    	
    	for(int i=0;i<l;i++) {
    		cout<<s[i];
    	}
    	
    	cout<<endl ;
    }
   return 0;
}