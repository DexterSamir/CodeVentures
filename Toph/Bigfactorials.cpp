#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int n;
    cin>>n;
    if(n>=20) cout<<"0000";
    else {
    	int a=1;
    	for(int i=2;i<=n;i++){
    		a = (a*i)%10000;
    	}
    	
    	cout<<a<<endl;
    }
    
     
    
}