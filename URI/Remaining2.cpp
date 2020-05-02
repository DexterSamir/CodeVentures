#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int n;
    
    cin>>n;
    
    for(int i=1;i<=10000;i++) {
    	if(i%n==2){
    		cout<<i<<endl;
    	}
    }
    
    
}