#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int x, y;
    
    cin>>x>>y;
   
    for(int i=1, k=1;i<=y,k<=y;i++) {
    	for(int j=0;j<x;j++) {
    		if(k<=y)
    		cout<<k++<<" ";
    	} 
    	
    	cout<<endl;
    
    }
    
    
}