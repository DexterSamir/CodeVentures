#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    double x1,x2,y1,y2;
    
    cin>>x1>>y1>>x2>>y2;
    
    double a=x2 -x1;
    double b=y2-y1;
    
    double c =sqrt((a*a)+(b*b));
    cout<<fixed<<setprecision(4)<<c<<endl;
}