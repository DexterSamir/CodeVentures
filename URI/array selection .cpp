#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int n=100;
    double a[n];
    
    
    for(int i=0;i<n;i++) {
    	cin>>a[i];
    	
    }
    
    for(int i=0;i<n;i++) {
    	if(a[i]<=10) 
    	cout<<"A["<<i<<"] = "<<fixed <<setprecision(1) <<a[i]<<endl ;
    }
    
    
}