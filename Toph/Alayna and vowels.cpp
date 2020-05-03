#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    string s;
    
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    int v=0;
    
    for(int i=0;i<s.size();i++) {
    	if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        v++;
    }
    
    
    cout<<v<<endl;
    
    
}