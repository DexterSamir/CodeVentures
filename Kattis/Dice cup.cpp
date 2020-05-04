#include <bits/stdc++.h>
using namespace std;
//Author: Ezio Sam
#define ll long long
#define pb push_back 
#define sp " "
#define s string

int main()
{
	int n, a, b, c;
	
    cin>>a>>b;
    
    if(a==b) cout<<a+1<<endl ;
    
    else{
    	//if(a<b) swap(b, a);
        //cout<<a<<bn
        if(a>b) swap(a, b);
    	for(int i=a+1;i<=b+1;i++) {
    		cout<<i<<endl ;
    	}
    }
   return 0;
}