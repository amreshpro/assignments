#include<iostream>
using namespace std;

int main(){
int list[10];
int sum = 0;

for (int i = 0; i < 10; ++i)
{
  cin>>list[i];
  sum+=list[i];
}

cout<<"SumOfArrayElements: "<<sum<<endl;

  return 0;
}
