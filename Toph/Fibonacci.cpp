#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
  int  a=1;
  int  b=1;
  int n;
  cin>>n;
    
    for(int i=1;i<=n;i++){
    	if(i==n)
    	cout<<a<<endl;
    	int c=a+b;
    	a=b;
    	b=c;
    	
    }
}