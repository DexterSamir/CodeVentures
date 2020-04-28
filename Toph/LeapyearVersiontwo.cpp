#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int n;
    
    cin>>n;
    
    if(n%4==0){
    	if(n%100==0){
    		if(n%400==0){
    			cout<<"Yes";
    		}
    		else{
    			cout<<"No";
    		}
    	}
    	else {
    		cout<<"Yes";
    	}
    }
    
    else{
    	cout<<"No";
    }
}