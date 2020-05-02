#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,o=0;;
    cin>>n;
    
    while (n!=0){
    	if(n%2==1){
    		o++;
    		n/=2;
    	}
    	else
    	  n/=2;
    }
    
    cout<<(pow(2,o))-1<<endl ;
    
    
}