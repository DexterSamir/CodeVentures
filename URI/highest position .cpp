#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int max= INT_MIN, pos,n;
    
    for(int i=1;i<=100;i++){
    	cin>>n;
    	
    	if(n>max){
    		max =n;
    		pos=i;
    	}
    }
    
    cout<<max<<endl<<pos<<endl;
    
    
}