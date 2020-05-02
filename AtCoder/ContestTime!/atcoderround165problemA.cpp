#include <bits/stdc++.h>

using namespace std;

//Author: Ezio Sam
//Site: Atcoder
//Contest no: Atcoder 165
//Problem no: A
//Name : We Love Golf

int main()

{

	  int n, a, b, c=0;

      cin>>n;

      cin>>a>>b;

    

      for(int i=a;i<=b;i++) {

    	if(i%n==0) {

    		c=1 ; break;

    	}

    }

    if(c) cout<<"OK"<<endl ;

    else cout<<"NG"<<endl ;
  

}
