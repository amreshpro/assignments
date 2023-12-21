// sum using default argument
#include<iostream>
using namespace std;

void sum(int a,int b =0, int c = 0){
	int res = a+b+c;
	cout<<"Sum: "<<res<<endl;
}


int main(){

int a,b,c;
cin>>a>>b>>c;
sum(a,b);
sum(a,b,c);




  return 0;
}
