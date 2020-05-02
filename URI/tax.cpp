#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    double n, t;
    
    cin>>n;
    
    if(n<2000.0){
    	cout<<"Isento"<<endl;
    }
    else{
    if (n >= 2000.01 && n <= 3000.00){
          t =(n - 2000.00)*0.08; 
        
    }else if (n >= 3000.01 && n <= 4500.00){
          t = ((n - 3000.00)*0.18 + 1000.00*0.08);
    }else if (n >= 4500.01){
          t = ((n - 4500.00)*0.28 + 1500.00*0.18 + 1000.00*0.08);
    }
    
    	cout<<"R$ "<<fixed <<setprecision (2)<<t<<endl;
    }
    
    
    return 0;
    
    
}