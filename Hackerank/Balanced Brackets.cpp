#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

string Bal(string s){
	stack<char>p;
	
	for(auto c:s){
	   if(c=='(' || c=='{' || c== '[' ){
   		p.push(c);
   	}
   	else {
   		if(c==')' ){
   		if(p.empty() || p.top()!= '(' ) return "NO";
   			p.pop();
   			}
   			
   			
   		if(c=='}' ){
   		if(p.empty() || p.top()!= '{' ) return "NO";
   		    p.pop();
   		}
   			
   		if(c==']' ){
   			
   		if(p.empty() || p.top()!= '[' ) return "NO";
   			p.pop();
   		}		
   	}
	}
	
	return p.empty()?"YES":"NO";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int n;
    string s;
    cin>>n;
    
    while(n--){
    	cin>>s;
    	cout<< Bal(s)<<endl ;
    }
    
    
}