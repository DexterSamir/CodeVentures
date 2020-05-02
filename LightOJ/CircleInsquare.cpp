#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam
#define pi 2*acos(0.0)
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    double sar, car, bar;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) {
    	double r ; cin>>r;
    
    	car= pi* r *r;
    	sar= 4*r*r;
    	bar = sar - car;
    	
    	cout<<"Case "<<i<<": "<<fixed <<setprecision (2)<<bar<<endl ;
    }
    
    
}