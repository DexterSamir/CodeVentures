#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    
    int dk=(k*l)/nl;
    int lk=(c*d);
    int sk=(p/np);
    
    cout<<min({dk,lk,sk})/n<<endl;
    return 0;
}