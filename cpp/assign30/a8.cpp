//function overloading
#include <iostream>
using namespace std;

#define PI 3.14

int area(int radius){
return PI*radius*radius;
}
int area(int length,int breadth){
	return length*breadth;
}


int main(int argc, char const *argv[])
{
	int radius,length,breadth;
	cin>>radius;
	cin>>length>>breadth;
	cout<<"AreaOfCircle: "<<area(radius)<<endl;
	cout<<"AreaOfRectangle: "<<area(length,breadth)<<endl;

	return 0;
}