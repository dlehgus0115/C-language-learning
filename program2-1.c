#include <stdio.h> //#include <> 해더파일이며 외부의 변수 함수 소스코드 사용을 위해서 사용, stdio.h: 표준입출력함수
void main() //void : return값 없는 자료형 함수 main() : C언어 시작시 가장 먼저 호출되는 함수
{
	printf("char 의 크기는 %d 바이트 입니다.\n", sizeof(char)); //char : 1바이트 문자형 자료형이며 -128부터 127까지의 정수에 해당되는 문자를 저장가능
	printf("unsigned char 의 크기는 %d 바이트 입니다.\n", sizeof(unsigned char));//unsigned char : 1바이트 문자형 자료형이며 0부터 255까지의 정수에 해당되는 문자를 저장가능
	printf("short 의 크기는 %d 바이트 입니다.\n", sizeof(short)); //short : 2바이트 정수형 자료형이며 -32768부터 32767까지 정수를 저장가능
	printf("unsigned short 의 크기는 %d 바이트 입니다.\n", sizeof(unsigned short));//unsigned short : 2바이트 정수형 자료형이며 0부터 65535까지 정수를 저장가능
	printf("int 의 크기는 %d 바이트 입니다.\n", sizeof(int));//int : 4바이트 정수형 자료형이며 -214783648부터 2147483647까지 정수를 저장가능
	printf("unsigned int 의 크기는 %d 바이트 입니다.\n", sizeof(unsigned int));//unsigned int : 4바이트 정수형 자료형이며 0부터 4294967295까지 정수를 저장가능
	printf("long 의 크기는 %d 바이트 입니다.\n", sizeof(long));//long : 4바이트 정수형 자료형이며 -214783648부터 2147483647까지 정수를 저장가능
	printf("unsigned long 의 크기는 %d 바이트 입니다.\n", sizeof(unsigned long));//unsigned long : 4바이트 정수형 자료형이며 0부터 4294967295까지 정수를 저장가능
	printf("float의 크기는 %d 바이트 입니다.\n", sizeof(float));//float : 4바이트 실수형 자료형이며 ±3.4*10^-38부터 ±3.4*10^38까지 실수를 저장가능 표현시 오차발생가능
	printf("double의 크기는 %d 바이트 입니다.\n", sizeof(double));// : 4바이트 실수형 자료형이며 ±1.7*10^-306부터 ±1.7*10^306까지 실수를 저장가능 표현시 오차발생가능
}
//printf() : 프로그램에서 모니터를 통하여 글자를 출력하는 기능을 제공함, sizeof() : 사용중인 변수가 몇 바이트인지 출력해주는 함수