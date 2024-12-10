#include <iostream>

using namespace std;

int main() {
    
int n,t;
n < t;
cin >> n >> t;
for (n;n<=t;n++)
{
    if(1<=n && n<=9)
    {
        switch(n)
        {
            case 1:
            cout << "one"<< endl;
            break;
            case 2:
            cout << "two"<< endl;
            break;
            case 3:
            cout << "three"<< endl;
            break;
            case 4:
            cout << "four"<< endl;
            break;
            case 5:
            cout << "five"<< endl;
            break;
            case 6:
            cout << "six"<< endl;
            break;
            case 7:
            cout << "seven"<< endl;
            break;
            case 8:
            cout << "eight"<< endl;
            break;
            case 9:
            cout << "nine"<< endl;
            break;
        }
    }
else if(n>9)
{
    if(n%2==0)
    {
        cout << "even" << endl;
    }
    else if(n%2==1)
    {
        cout << "odd" << endl;
    }
}
}
    return 0;
}
