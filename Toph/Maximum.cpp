#include <bits/stdc++.h>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int n, a;
    int max = INT_MIN;
    cin>>n;
    n++;
    while(n--){
    	cin>>a;
    	
    	if(a>=max){
    		max =a;
    	}
    }
    
    cout<<max;
}