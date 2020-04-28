#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    string s, m;
    
    cin>>s;
    
    m=s;
    
    reverse(s.begin(), s.end());
    
    cout<<((s==m)? "Yes":"No");
    
    
}