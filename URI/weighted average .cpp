#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int n ;
    double a, b, c;
    cin>> n;
    
    while (n--){
    	cin>>a>>b>>c;
    	
    	double d= (a*2.0 + b*3.0 + c*5.0)/10.0;
    	
    	cout<<fixed <<setprecision (1)<<d<<endl;
    }
    
    
}