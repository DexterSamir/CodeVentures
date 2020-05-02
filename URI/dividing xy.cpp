#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    double a, b, n;
    
    cin>>n;
    
    while(n--){
    	
    	cin>>a>>b;
    	if(b==0){
    		cout<<"divisao impossivel"<<endl ;
    	}
    	else
    	  cout<<fixed <<setprecision (1)<<a/b<<endl;
    }
    
    
}