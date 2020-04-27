#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int a,b,c=0;
    cin>>a>>b;
    
    
    
    while(a!=0||b!=0){
    	int sum= a%10+b%10;
    	if(sum>=10) c=1;
    	a=a/10;
    	b=b/10;
    }
    
    if(c){
    	cout<<"Yes";
    	}
    else
    	cout<<"No";
    
}