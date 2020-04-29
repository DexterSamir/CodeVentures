#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int a,b,c,d;
    
    int s=0;
    cin>>a>>b>>c>>d;
    
    if((b>c)&&(d>a)&&((c+d)>(a+b))&&c&&d&&(a%2==0)){
    	cout<<"Valores aceitos"<<endl;
    }
    else{
    	cout<<"Valores nao aceitos"<<endl;
    }
}