#include <stdio.h>//#include <> 해더파일이며 외부의 변수 함수 소스코드 사용을 위해서 사용, stdio.h: 표준입출력함수
void main() //void : return값 없는 자료형 함수 main() : C언어 시작시 가장 먼저 호출되는 함수
{
	char str1[50] = "C 언어에서 문자열을 출력합니다\n"; //char : 1바이트 문자형 자료형이며 -128부터 127까지의 정수에 해당되는 문자를 저장가능 변수 선언시 char 변수명 으로 선언
	char str2[100] = "문자열을 저장하기 위해서 배열을 이용합니다\n"; // c언어에서 변수 선언함과 동시에 변수값을 대입하는 것이 가능하다.
	// 배열 : 여러 개의 데이터를 하나의 배열 이름으로 다룰 수 있도록 여러 개의 메모리 저장소를 제공하는 자료형, 선언시 -> 자료명 배열명[배열개수];로 선언
	// 문자열 : 문자들의 연속된 나열, 배열의 각 원소에 문자들을 저장하여 문자열을 표현 
	printf("문자열1: %s", str1); //%s : 문자열형 형식지정문자이며 여러글자(문자열)의 문자를 출력할 때 사용한다 
	printf("문자열2: %s", str2); //printf() : 프로그램에서 모니터를 통하여 글자를 출력하는 기능을 제공함
}//printf 함수 내 " " 안의 출력할 문자열에 형식지정문자 (Ex:%d)를 삽입하고 변수명은 " " 뒤에 ,로 구분하여 지정한다 변수와 형식지정문자는 1대 1로 매핑된다
 //\n : 줄을 바꾸는 제어문자

