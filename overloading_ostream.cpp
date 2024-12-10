#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person
{
    private: 
    string name, surname;
    
    public:
    Person(string n, string s)
    {
        this->name = n;
        this->surname = s;
    }
    friend ostream& operator<<(ostream& out,Person const& p1);
    friend istream& operator>>(istream& ins, Person p1);
    
};
istream& operator >> (istream& ins, Person p1)
{
   ins >> p1.name;
   ins >> p1.surname; 
   return ins;
};
ostream & operator << (ostream &out, const Person& p1)
{
    out << "first_name=" << p1.name << ","<<"last_name=" << p1.surname;
    return out;
};


int main() {
    
    string name,surname,message;
    
    
    cin >> name >> surname >> message;
    
    Person p(name,surname);
    
    
    cout << p << " " << message << endl;
    
    
       
    return 0;
}
