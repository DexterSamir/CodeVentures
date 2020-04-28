#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    double h, m;
    
    cin>>h>>m;
    
    cout<<fixed<<setprecision(4)<<((((h*30)-(m*5.5))<(360-((h*30)-m*5.5)))?(h*30-m*5.5):360-(h*30-m*5.5));
}