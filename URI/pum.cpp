#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int n;
    
    cin>>n;
    int k=1;
    for(int i=0;i<n;i++) {
    	for(int j=0;j<3;j++) 
    	{
    		cout << k++<<" ";
    	}
    	k++;
    	cout<<"PUM"<<endl ;
    }
    
    
}