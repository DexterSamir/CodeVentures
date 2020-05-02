#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int a[5], p=0, n=0, e=0,o=0;
    
    for(int i=0;i<5;i++) {
    	cin>>a[i];
    	if(a[i]%2==0) {
    		e++;
    	}
    	else
    	{
    		o++;
    	}
    	if(a[i]>0) p++;
    	else if(a[i]<0) n++;
    }
    
    cout<<e<<" valor(es) par(es)"<<endl;
    cout<<o<<" valor(es) impar(es)"<<endl;
    cout<<p<<" valor(es) positivo(s)"<<endl;
    cout<<n<<" valor(es) negativo(s)"<<endl;
    
    
    
}
