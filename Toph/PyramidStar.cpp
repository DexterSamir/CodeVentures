#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
	int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
    	for(int k=i;k<n-1;k++) cout<<" ";
    	for(int j=0;j<=i;j++) {
    		if(j==i) cout<<"*";
    		else cout<<"* ";
    	}
    	cout<<endl;
    	
    		
    }
}