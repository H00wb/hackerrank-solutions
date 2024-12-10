#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void update(int* a, int* b)
{
    int*a1;
    int*b1;
    (*b1) = (*a) + (*b);
    int equation = (*a) - (*b);
    *a1 = abs(equation);
    
    cout << *b1 << endl << *a1 ;
}


int main() {
    
    int a,b;
    
    cin >> a >> b;
    
    update(&a,&b);
    
    
      
    return 0;
}
