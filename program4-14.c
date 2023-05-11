#include <stdio.h>//#include <> 해더파일이며 외부의 변수 함수 소스코드 사용을 위해서 사용, stdio.h: 표준입출력함수
void main() //void : return값 없는 자료형 함수 main() : C언어 시작시 가장 먼저 호출되는 함수
{
	int		num; //int : 4바이트 정수형을 처리하기 위한 자료형이며 -214783648부터 2147483647까지 정수를 저장가능 변수 선언시 int 변수명 과 같이 선언
	int		nu;
	printf("반복할 횟수를 입력하세요 :");
	scanf("%d", &nu);// scanf: 표준입력함수이며 키보드를 통해서 데이터를 입력하는 기능을 제공한다 & 변수는 메모리 공간에서의 변수에 대한 주소를 구하기 위해 변수명 앞에 반드시 선언해야 한다
	//사용시 scanf 함수 내 " " 안의 출력할 문자열에 형식지정문자 (Ex:%d)를 삽입하고 변수명은 " "안의 형식지정문자 뒤에 ,&변수명으로 지정한다 변수와 형식지정문자는 1대 1로 매핑된다
	num = 0; // = :  단순대입 연산자이며 = 왼쪽의 변수에 오른쪽의 값을 대입할 때 사용 Ex) a = 10 -> a는 10이다

	do //do while 문 : 중괄호 내 실행문 선 실행 후 조건식 참 거짓 판단 거짓일시 실행문 블록 미 실행 후 다음 코드 실행 참일시 실행문 블록 실행 및 while 조건식 재 판단
	{                //사용법 do {실행문} while(조건식)
		printf("do-while 문을 이용하여 반복 실행됩니다\n"); //printf() : 프로그램에서 모니터를 통하여 글자를 출력하는 기능을 제공함, \n : 줄을 바꾸는 제어문자
		num++; // ++: 증감연산자이며 a++의 뜻은 실행문을 실행한 후에 a의 값을 1 증가하라는 의미이다.
	} while (num < nu); 
} //printf 함수 내 " " 안의 출력할 문자열에 형식지정문자 (Ex:%d)를 삽입하고 변수명은 " " 뒤에 ,로 구분하여 지정한다 변수와 형식지정문자는 1대 1로 매핑된다