#include <stdio.h>//#include <> 해더파일이며 외부의 변수 함수 소스코드 사용을 위해서 사용, stdio.h: 표준입출력함수
void main() //void : return값 없는 자료형 함수 main() : C언어 시작시 가장 먼저 호출되는 함수
{
	int		i_test; //int : 4바이트 정수형을 처리하기 위한 자료형이며 -214783648부터 2147483647까지 정수를 저장가능 변수 선언시 int 변수명 과 같이 선언
	short s_test; //short :  2바이트 정수형을 처리하기 위한 자료형이며 -32768부터 32767까지 정수를 저장가능 변수 선언시 short 변수명 과 같이 선언
	char c_test; //char : 1바이트 문자형 자료형이며 -128부터 127까지의 정수에 해당되는 문자를 저장가능 변수 선언시 char 변수명 으로 선언

	printf("char 형의 크기는 %d 바이트\n", sizeof(char)); //size of 연산자 : 변수의 기억 장소나 type의 크기를 바이트 단위로 나타냄, 사용법 : sizeof(type);, sizeof(상수), sizeof(변수명);
	printf("short 형의 크기는 %d 바이트\n", sizeof(short));
	printf("int 형의 크기는 %d 바이트\n", sizeof(int));
	printf("long 형의 크기는 %d 바이트\n", sizeof(long)); //long : 4바이트 정수형을 처리하기 위한 자료형이며 - 214783648부터 2147483647까지 정수를 저장가능 변수 선언시 int 변수명 과 같이 선언
	printf("double 형의 크기는 %d 바이트\n", sizeof(double)); //double : 4바이트 실수형 자료형이며 ±1.7*10^-306부터 ±1.7*10^306까지 실수를 저장가능 표현시 오차발생가능 변수 선언시 double 변수명 으로 선언

	printf("변수 c_test형의 크기는 %d 바이트\n", sizeof(c_test));
	printf("변수 s_test형의 크기는 %d 바이트\n", sizeof(s_test));
	printf("변수 i_test형의 크기는 %d 바이트\n", sizeof(i_test));

	printf("정수 159784 의 크기는 %d 바이트\n", sizeof(159784));
	printf("실수 3.141592 의 크기는 %d 바이트\n", sizeof(3.141592)); //%d : 정수형 형식지정문자이며 부호 있는 10진수 형태의 숫자를 출력할 때 사용한다
} //printf() : 프로그램에서 모니터를 통하여 글자를 출력하는 기능을 제공함, \n : 줄을 바꾸는 제어문자
 //printf 함수 내 " " 안의 출력할 문자열에 형식지정문자 (Ex:%d)를 삽입하고 변수명은 " " 뒤에 ,로 구분하여 지정한다 변수와 형식지정문자는 1대 1로 매핑된다