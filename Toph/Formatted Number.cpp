#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    string s="",r=""; 
    int c=0;
    cin>>r;
    for(int i=r.size()-1;i>=0;i--){
    	c++;
    	s+=r[i];
    	if(c==3 && i!=0){
    		s+=",";
    		c=0;
    	}
    }
    reverse(s.begin(),s.end());
    cout<<s;
}