#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int n, fac=1;
    
    cin>>n;
    
    for(int i=1;i<=n;i++){
    	fac*=i;
    }
    
    cout <<fac<<endl ;
    
}