#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    string str;
    
    cin>>str;
    
    for(int i=0;i<str.size();i++){
    	if(i==0)
    	putchar(toupper(str[i]));
    	else if(i==str.size()-1)
    	cout<<str[i]<<".";
    	else
    	{
    		
    	if(str[i]=='s') cout<<"$";
    	else if(str[i]=='i' )cout<<"!";
    	else if (str[i]=='o') cout<<"()";
    	else cout<<str[i];
    	
    	}
    }
}