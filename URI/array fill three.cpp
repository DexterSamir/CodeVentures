#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    double n;
    cin>>n;
     //cout<<"N[0] = "<<fixed<<setprecision (4)<<n<<endl;
    for(int i=0;i<100;i++){
    	
    	cout<<"N["<<i<<"] = "<<fixed<<setprecision (4)<<n<<endl;
   	 n/=2;
    }
    
    
}
