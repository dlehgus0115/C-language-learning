#include <stdio.h>//#include <> 해더파일이며 외부의 변수 함수 소스코드 사용을 위해서 사용, stdio.h: 표준입출력함수
void main() //void : return값 없는 자료형 함수 main() : C언어 시작시 가장 먼저 호출되는 함수
{
	printf("C 언어에서 출력하는 문자열입니다.\n"); //printf() : 프로그램에서 모니터를 통하여 글자를 출력하는 기능을 제공함
	printf("printf() 함수를 출력하였습니다.\n"); //printf()에서 출력하고 싶은 문자열이 있을시 문자열 안에 ""로 감싸야 한다.
} //\n : 줄을 바꾸는 제어문자