#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    string s;
    stack<char>p;
    cin>>s;
    
    for(int i=0;i<s.size();i++){
    	if((s[i]=='(')||(s[i]=='{')||(s[i]=='['))
    		{
    			p.push(s[i]);
    		}
    	else{
    		if(p.empty()){
    			cout<<"No";
    			return 0;
    		}
    		else{
    			if(s[i]==')'){
    			    char t=p.top();
    				p.pop();
    				if(t=='{'||t=='['){
    					cout<<"No";
    					return 0;
    				}
    			}
    			if(s[i]=='}'){
    			    char t=p.top();
    				p.pop();
    				if(t=='['||t=='('){
    					cout<<"No";
    					return 0;
    				}
    			}
    			if(s[i]==']'){
    			    char t=p.top();
    				p.pop();
    				if(t=='('||t=='{'){
    					cout<<"No";
    					return 0;
    				}
    			}
    		}
    	}	
    }
    
    if(p.empty()) cout<<"Yes";
    else cout<<"No";
    
}