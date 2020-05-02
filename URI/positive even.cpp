#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int a[5], t=0, s=0;
    
    for(int i=0;i<5;i++) {
    	cin>>a[i];
    	if(a[i]%2==0) {
    		t++;
    		
    	}
    }
    
    cout<<t<<" valores pares"<<endl;
    
    
    
}