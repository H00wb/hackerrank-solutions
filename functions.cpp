#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    int max;
    if(b<a && c<a && d<a)
    {
    max = a;
    }
    if(a<b && c<b && d<b)
    {
    max= b;
    }
    if(a<c && b<c && d<c)
    {
    max = c;
    }
    if(a<d && b<d && c<d)
    {
    max = d;
    }
    return max;
}

int main() {
    
    int a,b,c,d;
    
    cin >> a >> b >> c >> d;
    
    cout << max_of_four(a,b,c,d);
       
    return 0;
}
