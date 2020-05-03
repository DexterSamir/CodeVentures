#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int n, m;
    cin>>n;
    while(n--){
    	cin>>m;
    	for(int i=1;i<m;i++) {
    		for(int j=1;j<=i;j++) cout<<"*";
    		for (int j=1;j<=2*(m-i);j++) cout<<"#";
    		for(int j=1;j<=i;j++) cout<<"*";
    		
    		cout<<endl ;
    	}
    	for(int i=1;i<=m*2;i++) cout<<"*" ;
    	
    	cout<<endl <<endl ;
    }
    
    
}