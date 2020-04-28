#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int a, b, c;
    
    cin >>a>>b>>c;
    
    int s=0;
    
    for(int i=a;i<=b;i++){
    	if(i%c==0)
    	s++;
    }
    
    cout<<s<<endl;
}