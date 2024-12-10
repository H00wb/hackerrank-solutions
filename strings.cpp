#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    char c;
    cin>> a;
    cin>> b;
    int len1 = a.size();
    int len2 = b.size();
    
    cout << len1 << " " << len2<<endl;
    cout << a+b<<endl;
    
    c=a[0];
    a[0]=b[0];
    b[0]=c;
    cout << a+ " " +b<<endl;
    
    return 0;
}
