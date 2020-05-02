#include <bits/stdc++.h>
using namespace std;

//Author: Ezio Sam

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
    int n;
    cin>>n;
    if(n%2==0){
    	n++;
    }
    for(int i=1;i<=6;i++) {
    	cout<<n<<endl; n+=2;
    }
    
    
}