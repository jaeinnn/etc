#include <stdio.h>


int main()
{
   char sTemp[16] = "Hello World";

   printf("%s", sTemp);

   return 0; 
//C언어에는 String이 지원되지않기 때문에 char array형태로 문자열을 처리한다 
//문자열 "Hello World"를 sTemp라는 char array변수에 대입한다
//printf()함수에서 문자열 출력을 위해 "%s"포맷스트링을 사용하여 sTemp변수를 출력한다 

}