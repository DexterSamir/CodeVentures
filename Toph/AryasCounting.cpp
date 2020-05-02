#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int n,a,b,c;
    
    int t=0;
    cin>>n;
    
    while(n--){
        
    	cin>>a>>b>>c;
    	cout<<"Case "<<++t<<": ";
    	
    	if(a>b&&a>c)cout<<"A"<<endl;
    	else if(b>c&&b>a)cout<<"B"<<endl;
    	else if(c>b&&c>a)cout<<"C"<<endl;
    	else
    	cout<<"Confused"<<endl;
    	
    	
    }
    
    
}