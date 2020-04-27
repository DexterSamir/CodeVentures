#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int t, a, b, i=1;
    
    cin>>t;
    
    while (t--){
    	
    	cin>>a>>b;
    	
    	cout<<"Case "<<i++<<": "<<a+b<<endl;
    }
}