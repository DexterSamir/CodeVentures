#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int m, n;
    cin>>m;
    string s[m]; 
    
    for(int i=0;i<m;i++) {
    	cin>>s[i];
    }
    cin>>n;
    string q[n];
    int a[n];
    for(int i=0;i<n;i++) {
    	cin>>q[i];
    }
    
    for(int i=0;i<n;i++) {
    	int k=0;
    	for(int j=0;j<m;j++) {
    		if(q[i]==s[j]){
    			a[i]= ++k;
    		}
    		
    		
    	}
    	if(k==0){
    		a[i] = 0;
    	}
    	
    }
    
    for(int i=0;i<n;i++) cout <<a[i]<<endl ;
    
}