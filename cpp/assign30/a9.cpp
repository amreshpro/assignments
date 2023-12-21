// integer or real number sum in  function overlaoding
#include <iostream>
using namespace std;

int sum(int a,int b){return a+b;}
float sum(float a, float b){return a+b;}


int main(int argc, char const *argv[])
{
	int a,b;
	cin>>a>>b;
	float c,d;
	cin>>c>>d;

	cout<<"Sum("<<a<<", "<<b<<") : "<<sum(a,b)<<endl;
	cout<<"Sum("<<c<<", "<<d<<") : "<<sum(c,d)<<endl;


	return 0;
}