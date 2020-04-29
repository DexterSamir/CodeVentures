#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int n;
    
    
    cin>>n;
    
    int a = n/365;
    int b = (n%365)/30;
    int c = ((n%365)%30);
    
    cout<<a<<" ano(s)"<<endl;
    cout<<b<<" mes(es)"<<endl;
    cout<<c<<" dia(s)"<<endl;
    
}