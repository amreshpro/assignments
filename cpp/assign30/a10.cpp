// add two number having different datatypes in function overloading
#include <iostream>
using namespace std;

float sum(int a , float b){ return a+b;}
float sum(float a , int b){ return a+b;}


int main(int argc, char const *argv[])
{
int a;float b;
cin>>a>>b;
cout<<"Sum("<<a<<", "<<b<<"): "<<sum(a,b)<<endl;

int  a2;
float b2;
cin>>a2>>b2;

cout<<"Sum("<<b2<<", "<<a2<<"): "<<sum(b2,a2)<<endl;


	return 0;
}