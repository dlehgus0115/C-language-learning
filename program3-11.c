#include <stdio.h>//#include <> 해더파일이며 외부의 변수 함수 소스코드 사용을 위해서 사용, stdio.h: 표준입출력함수
void main() //void : return값 없는 자료형 함수 main() : C언어 시작시 가장 먼저 호출되는 함수
{
	int		a, b, c; //int : 4바이트 정수형을 처리하기 위한 자료형이며 -214783648부터 2147483647까지 정수를 저장가능 변수 선언시 int 변수명 과 같이 선언

	a = 6; // = :  단순대입 연산자이며 = 왼쪽의 변수에 오른쪽의 값을 대입할 때 사용 Ex) a = 10 -> a는 10이다
	b = 8;
	printf("a는 %d b는 %d입니다\n", a, b); //printf() : 프로그램에서 모니터를 통하여 글자를 출력하는 기능을 제공함, \n : 줄을 바꾸는 제어문자
        //%d : 정수형 형식지정문자이며 부호 있는 10진수 형태의 숫자를 출력할 때 사용한다
	c = a > b; // > :  관계연산자이며 a > b의 뜻은 a가 b보다 크면 참이라는 의미이다.
	printf("a > b 의 결과는 %d 입니다\n", c); 
	c = a >= b; // >= :  관계연산자이며 a >= b의 뜻은 a가 b보다 크거나 같으면 참이라는 의미이다.
	printf("a >= b 의 결과는 %d 입니다\n", c); 
	c = a < b; //  < :  관계연산자이며 a < b의 뜻은 b가 a보다 크면 참이라는 의미이다.
	printf("a < b 의 결과는 %d 입니다\n", c); 
	c = a <= b; // <= :  관계연산자이며 a <= b의 뜻은 b가 a보다 크거나 같으면 참이라는 의미이다.
	printf("a <= b 의 결과는 %d 입니다\n", c); 
	c = a == b; // == :  관계연산자이며 a == b의 뜻은 a와 b가 같으면 참이라는 의미이다.
	printf("a == b 의 결과는 %d 입니다\n", c); 
	c = a != b; // != :  관계연산자이며 a != b의 뜻은 a와 b가 다르면 참이라는 의미이다.
	printf("a != b 의 결과는 %d 입니다\n", c); 
} //printf 함수 내 " " 안의 출력할 문자열에 형식지정문자 (Ex:%d)를 삽입하고 변수명은 " " 뒤에 ,로 구분하여 지정한다 변수와 형식지정문자는 1대 1로 매핑된다
