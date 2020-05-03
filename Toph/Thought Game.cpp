#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int a, b, n;
    
    cin>>n;
    
    while (n--){
    	cin>>a>>b;
    	if(((a+b)/2)%2==0) cout<<"Sadia will be happy."<<endl ;
    	else cout<< "Oops!"<<endl ;
    }
    
    
}