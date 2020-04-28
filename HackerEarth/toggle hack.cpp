#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    string a;
    
    cin>>a;
    
    for(int i=0;i<a.size() ; i++){
    	if(a[i]>=65 && a[i]<97){
    		a[i]+=32;
    		continue;
    	}
    	if(a[i]>=97 ){
    		a[i]-=32;
    	
    	}
    }
    
    cout<<a<<endl;
}