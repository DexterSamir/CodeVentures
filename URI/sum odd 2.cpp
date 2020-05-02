#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int n, x, y;
    
    cin>>n;
    while (n--){
    	int sum=0;
    	cin>>x>>y;
    	
    	if(x%2==0) x++;
    	
    	for(int i=x, j=1;j<=y;j++,i+=2){
    		sum+=i;
    	}
    	cout<<sum<<endl ;
    }
      
}