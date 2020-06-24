#include <bits/stdc++.h> 
using namespace std; 

int findMaxGCD(vector<int> arr, int n) 
{  
  int high = n; 

  int count[high + 1] = {0}; 
  for (int i = 0; i < n; i++) 
    count[arr[i]]++; 
 
  int counter = 0; 
  for (int i = high; i >= 1; i--) 
  { 
    int j = i; 
    counter = 0; 
  
    while (j <= high) 
    { 
      if(count[j] >=2) 
      return j; 

    else if (count[j] == 1)     
        counter++;     

     
      j += i; 
      if (counter == 2)     
        return i; 
    } 
  } 
} 

int main() 
{ 
  
  int n, t;
  
  cin>>t;
  
  while(t--) {
  cin>>n;
  std::vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    a[i] = i+1;
  }
  cout << findMaxGCD(a, n)<<endl ;
  } 
  return 0; 
} 
