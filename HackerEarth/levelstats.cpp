#include <bits/stdc++.h> 

using namespace std; 

int main()  

{  

    int i, j, m, n, p[9999999], c[9999999], t;
    
    int f=1;
    cin>>t;
    
    while(t--){
        cin>>n;
    
        for(i=1;i<=n;i++)
        {
            cin>>p[i]>>c[i];
            if(p[i]<p[i-1] || c[i]<c[i-1]  || c[i]> p[i]||(p[i]<=p[i-1]&&c[i]>c[i-1])||(p[i]<c[i]&&c[i]>c[i-1]))
            f=0;
        }
        if(f)
        cout<<"YES"<<endl;
        else
        cout <<"NO"<<endl ;
        
        f=1;
        
    }

    return 0;  

}
