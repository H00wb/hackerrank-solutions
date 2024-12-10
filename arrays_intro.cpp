#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, a;
    
    1<=n<=1000;
    1<=a<=1000;
    
    cin >> n;
    
    a = 0;
    
    int arr[n];
    
    1<=arr[n]<=10000; 
     

   while(a!=n)
   {
     cin >> arr[a];
      a++;
}
    for(int j=n-1;j!=-1;j--)
    {
        cout << arr[j] << " ";
    }
    
      
    return 0;
}
