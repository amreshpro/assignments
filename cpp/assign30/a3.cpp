// calculate x raise to power y
#include<iostream>
using namespace std;

int xRasiedToY(int x,int y){

int res = 1;
while(y--){
	res*=x;
}
return res;

}

int main(){
	int x,y;
	cin>>x>>y;
	cout<<x<<"^"<<y<<": "<<xRasiedToY(x,y)<<endl;

  return 0;
}
