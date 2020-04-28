#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int n;
    
    cin>>n;
    
    cout<<(((n%4==0)&&(n%400!=0))? "Yes":"No");
}