#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int a=0, b=0;
    
    string s;
    
    cin>>s;
    
    for(int i =0; i<s.size(); i++){
    	if(s[i]=='L')
    	a--;
    	if(s[i]=='R')
    	a++;
    	if(s[i]=='U')
    	b++;
    	if(s[i]=='D')
    	b--;
    }
    
    cout<<a<<" "<<b<<endl;
}