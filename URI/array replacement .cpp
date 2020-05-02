#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int n=10;
    int a[n];
    
    
    for(int i=0;i<n;i++) {
    	cin>>a[i];
    	if(a[i]<1) a[i]=1;
    }
    
    for(int i=0;i<n;i++) {
    	cout<<"X["<<i<<"] = "<<a[i]<<endl ;
    }
    
    
}