#include <stdio.h>//#include <> 해더파일이며 외부의 변수 함수 소스코드 사용을 위해서 사용, stdio.h: 표준입출력함수
void main() //void : return값 없는 자료형 함수 main() : C언어 시작시 가장 먼저 호출되는 함수
{
	int a; //int : 4바이트 정수형을 처리하기 위한 자료형이며 -214783648부터 2147483647까지 정수를 저장가능 변수 선언시 int 변수명 과 같이 선언
	char ch; //char : 1바이트 문자형 자료형이며 -128부터 127까지의 정수에 해당되는 문자를 저장가능 변수 선언시 char 변수명 으로 선언
	char str[50] = "단순 대입연산자입니다.\n"; 
	// 배열 : 여러 개의 데이터를 하나의 배열 이름으로 다룰 수 있도록 여러 개의 메모리 저장소를 제공하는 자료형, 선언시 -> 자료명 배열명[배열개수];로 선언
    // 문자열 : 문자들의 연속된 나열, 배열의 각 원소에 문자들을 저장하여 문자열을 표현

	a = 150; // = :  단순대입 연산자이며 = 왼쪽의 변수에 오른쪽의 값을 대입할 때 사용 Ex) a = 10 -> a는 10이다
	ch = 'A'; 

	printf("변수 a의 값은 %d ch 의 값은 %c 입니다\n", a, ch);
	printf("배열 str의 값은 %s", str);
}