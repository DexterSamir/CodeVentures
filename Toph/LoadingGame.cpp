#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    double p;
    cin>>p;
    
    int a=p/10.0;
    int b= 10-a;
    cout<<"[";
    for(int i=0;i<a;i++){
    	cout<<"+";
    }
    for(int i=0;i<b;i++){
    	cout<<".";
    }
    cout<<"] ";
    
    cout<<floor(p)<<"%";
}