#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    double n;
    cin>>n;
    
    double a,b,c;
    
    if (n<=400.0)
    {
    	b=n*.15;
    	a=n+b;
    	c=15;
    }
    else if(n>400.0 && n<=800.0){
    	b=n*.12;
    	a=n+b;
    	c=12;
    }
    else if(n>800.0 && n<=1200.0){
    	b=n*.10;
    	a=n+b;
    	c=10;
    }
    else if(n>1200.0 && n<=2000.0){
    	b=n*.07;
    	a=n+b;
    	c=7;
    }
    else{
    	b=n*.04;
    	a=n+b;
    	c=4;
    }
    
    cout<<"Novo salario: "<<fixed<<setprecision (2)<<a<<endl;
    cout<<"Reajuste ganho: "<<fixed<<setprecision (2)<<b<<endl;
    cout<<"Em percentual: "<<c<<" %"<<endl;
    
}