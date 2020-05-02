#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    double a,b,c;
    
    cin>>a>>b>>c;
    
    if(((a+b)>c)&&((a+c)>b) &&((b+c)>a)){
    	cout<<"Perimetro = "<<fixed<<setprecision(1)<<a+b+c<<endl;
    }
    else{
    	cout<<"Area = "<<fixed<<setprecision(1)<<((a+b)*c)/2.0<<endl;
    }
    
    
}