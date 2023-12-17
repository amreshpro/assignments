#include <stdio.h>

int main()
{
  // 1. size of character constant
  char c = 'G';
  printf("\n %ld \n",sizeof(c));//1
  //printf(sizeof(c));//error format not a string literal and no format argument
  printf("\n %ld \n",sizeof(char));//1
  printf("\n %ld \n",sizeof('A'));//4   A->ASCII->65->isaNumber->integerValue-> int-> 4byte

// 3. A->B using increment operator
char c1 = 'A';
++c1; //
printf("\n %c \n",c1);
//4. print unit digit of a number
int number = 23328;
printf("unit digit = %d\n",number%10);
printf("without last last/unit digit = %d\n",number/10);


}
