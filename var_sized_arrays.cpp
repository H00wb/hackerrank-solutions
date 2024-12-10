#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
int n,queries,number;
cin >> n >> queries;
vector<vector<int>> arrayofarr(n);

for(int i = 0;i<n;i++)
{
   cin >> number;
   arrayofarr[i].resize(number);
   for(int j=0;j<number;j++)
   {
    cin>>arrayofarr[i][j];
   } 
}

for(int i=0;i<queries;i++)
{
    int index,find;
    cin>>index>>find;
    cout << arrayofarr.at(index).at(find)<<endl;
}

  
   
   
}
