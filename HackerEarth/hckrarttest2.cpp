#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
   
    string s;
    int x=0,y=0;
    cin>>s;
    for(int i=0; i<s.size();i++){
    	if(s[i]=='z' || s[i]== 'Z' )
    	{
    		x++;
    	}
    	if(s[i]=='o' || s[i]== 'O' )
    	{
    		y++;
    	}
    	
    }
    
    if(2*x==y)
    {
    	cout<<"Yes"<<endl;
    }
    else
    {
    	cout<<"No"<<endl;
    }
    
    
    return 0;
}