// highest value digit in number
#include<iostream>
using namespace std;

int maxValueDigit(int number){
int max = 0;
while(number>0){

int lastDigit = number%10;
  max = lastDigit > max ? lastDigit : max;
  number/=10;

}


return max;
}

int main(){

int number;
cin>>number;

cout<<"maxValueDigit("<<number<<"): "<<maxValueDigit(number)<<endl;




  return 0;
}
