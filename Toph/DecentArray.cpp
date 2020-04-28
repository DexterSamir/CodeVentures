#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int a, b=INT_MIN ,c=1;
    
    int n;
    cin>>n;
    while(n--){
    	cin>>a;
    	if(a<b) c=0;
    	b=a;	
    }
    
    if(c)cout<<"Yes";
    else cout<<"No";
}