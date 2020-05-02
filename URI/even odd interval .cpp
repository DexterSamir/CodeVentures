#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int n, a;
    cin>>n;
    
    while(n--){
    	cin>>a;
    	
    	if(a==0){
    		cout<<"NULL"<<endl ;
    	}
    	else if(a>0){
    		if(a%2==0) cout<<"EVEN POSITIVE"<<endl;
    		else cout <<"ODD POSITIVE"<<endl;
    	}
    	else if(a<0){
    		if(a%2==0) cout<<"EVEN NEGATIVE"<<endl;
    		else cout <<"ODD NEGATIVE"<<endl;
    	}
    }
    
    
}