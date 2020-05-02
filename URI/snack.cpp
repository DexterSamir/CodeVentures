#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    double  b;
    int a;
    cin>>a>>b;
    switch(a)  {
    	case 1: cout<<"Total: R$ "<<fixed<<setprecision (2)<<b*4.00<<endl;break ;
    	case 2: cout<<"Total: R$ "<<fixed<<setprecision (2)<<b*4.50<<endl;break ;
    	case 3: cout<<"Total: R$ "<<fixed<<setprecision (2)<<b*5.00<<endl;break ;
    	case 4: cout<<"Total: R$ "<<fixed<<setprecision (2)<<b*2.00<<endl;break ;
    	case 5: cout<<"Total: R$ "<<fixed<<setprecision (2)<<b*1.50<<endl;break ;
    }
   
    
    
}