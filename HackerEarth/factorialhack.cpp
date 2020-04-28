#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
	int  n,f=1;
    cin >>n;
    
    for(int i=1;i<=n;i++){
    	f*=i;
    }
    
    cout<<f<<endl;
}