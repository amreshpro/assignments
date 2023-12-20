// prime number

#include<iostream>
using namespace std;

void isPrime(int number){
  if (number==1 || number==2)
  {
    cout<<number<<" is Prime"<<endl;

  }
  if (number%2==0)
  {
    cout<<" Not Prime"<<endl;
  }

int flag = 0;

for (int i = 3; i <= number-1; ++i)
{
  if (number%i==0)
  {
    ++flag;
    break;
  }

}

if (flag)
{
  cout<<number<<" Not Prime"<<endl;
}else{
  cout<<number<<" is Prime"<<endl;
}

}




int main(){

int number;
cin>>number;
isPrime(number);

  return 0;
}
