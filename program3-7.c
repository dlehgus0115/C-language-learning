#include <stdio.h>//#include <> 해더파일이며 외부의 변수 함수 소스코드 사용을 위해서 사용, stdio.h: 표준입출력함수
void main() //void : return값 없는 자료형 함수 main() : C언어 시작시 가장 먼저 호출되는 함수
{
	int		a, b; //int : 4바이트 정수형을 처리하기 위한 자료형이며 -214783648부터 2147483647까지 정수를 저장가능 변수 선언시 int 변수명 과 같이 선언
	double c; //double : 4바이트 실수형 자료형이며 ±1.7*10^-306부터 ±1.7*10^306까지 실수를 저장가능 표현시 오차발생가능 변수 선언시 double 변수명 으로 선언

	a = 5; // = :  단순대입 연산자이며 = 왼쪽의 변수에 오른쪽의 값을 대입할 때 사용 Ex) a = 10 -> a는 10이다
	b = 2;
	c = (double)a / b; //  / : 산술연산자이며 c = a / b의 뜻은 a와 b의 값을 나눈 결과를  c에 저장하라는 의미이다.
	// 형변환(Cast) : 연산자란 데이터를 원하는 형태의 자료형으로 변환시키는 것이며 변수명1 = (변환하고자 하는 변수명)변수명2과 같이 사용한다 
	printf("%d를 %d로 나누면 %f 입니다\n", a, b, c); //printf() : 프로그램에서 모니터를 통하여 글자를 출력하는 기능을 제공함, \n : 줄을 바꾸는 제어문자
	//printf 함수 내 " " 안의 출력할 문자열에 형식지정문자 (Ex:%d)를 삽입하고 변수명은 " " 뒤에 ,로 구분하여 지정한다 변수와 형식지정문자는 1대 1로 매핑된다
	//%d : 정수형 형식지정문자이며 부호 있는 10진수 형태의 숫자를 출력할 때 사용한다
	//%f : 부동소수점형형 형식지정문자이며 소수점이 있는 실수 형태의 숫자를 출력할 때 사용한다 
	// 여기서는 형변환 연산자로 변수명을 바꿨기에 2.500000라는 정상적인 답이 출력된다.
}