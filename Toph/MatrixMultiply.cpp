#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int a[2][2],b[2][2],c[2][2],i,j;
    
    for(i=0;i<2;i++){
    	for(j=0;j<2;j++){
    		cin>>a[i][j];
    	}
    }
    
     for(i=0;i<2;i++){
    	for(j=0;j<2;j++){
    		cin>>b[i][j];
    	}
    }
    
     for(i=0;i<2;i++){
    	for(j=0;j<2;j++){
    		c[i][j]=(a[i][0] * b[0][j] ) + (a[i][1] * b[1][j]);
    		cout<<c[i][j]<<" ";
    	}
    	cout<<endl;
    }
}