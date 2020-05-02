#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int n;
    
    cin >>n;
    
    for(int i=1;i<=n;i++) {
    	cout<<i<<" "<<i*i<<" "<<i*i*i<<endl ;
    	cout<<i<<" "<<(i*i)+1<<" "<<(i*i*i)+1<<endl ;
    }
    
    
}