#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

struct Student{
    int age;
    string first_name;
    string last_name;
    int standard;
};


int main() {
    Student emrehan;
    cin >> emrehan.age >> emrehan.first_name >> emrehan.last_name >> emrehan.standard;
    cout<<emrehan.age<< " " << emrehan.first_name<< " " <<emrehan.last_name<< " "<< emrehan.standard;
    return 0;
}
