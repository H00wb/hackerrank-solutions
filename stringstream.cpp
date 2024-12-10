#include <sstream>
#include <vector>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

vector<int> parseInts(string str);

int main() {
    string str;
    cin >> str;
    int sze = str.size();
    sze < 8*pow(10,5);
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

vector<int> parseInts(string str)
{
stringstream strstrm(str);
int temp;
char ch;
vector<int> numbersmason;

while(strstrm>>temp)
{
   numbersmason.push_back(temp); 
   strstrm >> ch;
}
return numbersmason;
    
}
