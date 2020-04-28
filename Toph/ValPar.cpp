#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
	string s;
    cin>>s;
   
    
    stack<char> p;
    
    for(int i=0;i<s.size();i++){
    	if(s[i] == '(' ) p.push(s[i]);
    	
    	else
    	{
    		if(p.empty()) {
    		cout<<"No";
    		return 0;
    	}
    	
    	else
    	  p.pop();
    	 }
    	
    }
    
    if(p.empty()) cout<<"Yes";
    else cout<<"No";
    return 0;
}