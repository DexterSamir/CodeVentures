#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0
//author :Dexter sam


int main()
{
    int a[6][6], i, j;
    
    int res= INT_MIN;
    
    for(int i=0;i<6;i++){
    	for(int j=0;j<6;j++){
    		cin>>a[i][j];
    	}
    	}
    	
    for(int i=0;i<4;i++){
    	for(int j=0;j<4;j++){
    		int sum =  a[i][j]+a[i][j+1]+a[i][j+2]+
    			          a[i+1][j+1]+
    		      a[i+2][j]+a[i+2][j+1]+a[i+2][j+2] ;
    		 
    		 res= std::max(res, sum)	;
    	}
    	
    }
    
    cout<<res<<endl;
    
    
    
}