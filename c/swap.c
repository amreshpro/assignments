// swap
#include<stdio.h>


int main(){
//swap using third variable
int a = 10;
int b = 15;
printf("a: %d, b: %d\n",a,b);
int temp = a;
a = b;
b = temp;
printf("a: %d, b: %d\n",a,b);

// swap
int c = 10;
int d = 20;

printf("c: %d, d: %d\n",c,d);
c = c+d;
d = c-d;
c = c-d;
printf("c: %d, d: %d\n",c,d);



}
