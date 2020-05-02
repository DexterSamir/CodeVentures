#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	double an=0, s=1;
    for(double i=1;i<=100;i++) {
    	an+=(s/i);
    }
    
    cout<<fixed <<setprecision (2)<<an;
}