#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int a, b, t;
    
    cin>>t;
    
    while(t--){
    	cin>>a;
    	
    	if(a<10)
    	cout<<"0 "<<a<<endl;
    	else
    	cout<"10 "<<a-10<<endl;
    }
}