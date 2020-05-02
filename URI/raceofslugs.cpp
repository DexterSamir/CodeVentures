#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int n, a;
    
    while (cin>>n){
    	int a[n];
    	for(int i=0;i<n;i++) {
    		cin>>a[i];
    	}
    	int m=*max_element(a, a+n);
    	
    	if(m<10) cout<<1<<endl ;
    	else if(m>=10 && m<20)cout<<2<<endl ;
    	else cout<<3<<endl ;
    }
    
}