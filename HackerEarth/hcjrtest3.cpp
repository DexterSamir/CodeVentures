#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int s;
    int f=1;
   
    cin>>s;
    
    char H[21];
    
    for(int i=0;i<s;i++){
    	cin>>H[i];
    	
    	if(H[i]=='.'){
    		H[i]='B';
    	}
    	if((H[i]=='H' && H[i-1]=='H'))
    	{
    		f=0;
    	}
    	
    }
    
    if(f)
    {
    	cout<<"YES"<<endl ;
    	for(int i=0;i<s;i++)
    	cout<<H[i];
    }
    else
    cout << "NO"<<endl;
    
    
}