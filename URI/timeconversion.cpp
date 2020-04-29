#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int n;
    
    
    cin>>n;
    
    int h=n/3600;
    int m=(n%3600)/60;
    int s=(n%3600)%60;
    
    cout<<h<<":"<<m<<":"<<s<<endl;
}