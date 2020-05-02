#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int a[4],b[4];
    
    for(int i=0;i<3;i++){
    	cin>>a[i];
    	b[i]=a[i];
    }
    
    sort(a,a+3);
    
    for(int i=0;i<3;i++){
    	cout<<a[i]<<endl;
    }
    cout<<endl;
    for(int i=0;i<3;i++){
    	cout<<b[i]<<endl;
    }
}