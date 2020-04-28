#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int cpu, mem, d, n, a, b, t;
    
    cin>>t>>cpu>>mem;
    
    
    while(t--){
    	cin>>d>>a>>b;
    	
    	if(a>cpu){
    		
    	cout<<"CLE";
    	return 0;
    	}
    	else if( b>mem){
    		cout<<"MLE";
    		return 0;
    	}
    	else if(d){
    				
    	cout<<"WA";
    	return 0;	
    		}
    		
    	
    }
    
    cout<<"AC";
    
    
}