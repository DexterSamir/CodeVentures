#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int m, n,c=0; 
    
    cin>>m>>n;
    char a[m+1][n+1];
      for(int i=1;i<=m;i++) {
    	for(int j=1;j<=n;j++) {
    		cin>>a[i][j];
    		
    	}
    }
    for(int i=1;i<=m;i++) {
    	for(int j=1;j<=n;j++) {
    		
    		if(a[i][j]=='.'){
    			if(a[i-1][j]!='*' && a[i+1][j]!='*' && a[i][j+1]!='*' && a[i][j-1]!='*')
    			c++;
    		}
    	}
    }
    
    cout<<c<<endl;
    
    
}