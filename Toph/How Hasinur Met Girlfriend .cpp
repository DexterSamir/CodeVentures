#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    string s, sss;
    int n;
    cin>>n;
    
    while(n--)
    {
    cin>>s;
     unordered_set<string> ss;
    //unordered_set<string >ss;
    
    for(int i=0;i<s.size();++i) {
    	
    	sss="";
    	for(int j=i;j<s.size();++j){
    		sss +=s[j];
    		ss.insert(sss);
    	}
    }
    
    cout <<ss.size()<<endl;
    }
}
    