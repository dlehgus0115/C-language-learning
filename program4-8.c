#include <stdio.h>//#include <> 해더파일이며 외부의 변수 함수 소스코드 사용을 위해서 사용, stdio.h: 표준입출력함수
void main() //void : return값 없는 자료형 함수 main() : C언어 시작시 가장 먼저 호출되는 함수
{
	int muge; //int : 4바이트 정수형을 처리하기 위한 자료형이며 -214783648부터 2147483647까지 정수를 저장가능 변수 선언시 int 변수명 과 같이 선언
	printf("체중을 입력하세요 :");
	scanf("%d", &muge); // scanf: 표준입력함수이며 키보드를 통해서 데이터를 입력하는 기능을 제공한다 & 변수는 메모리 공간에서의 변수에 대한 주소를 구하기 위해 변수명 앞에 반드시 선언해야 한다
	//사용시 scanf 함수 내 " " 안의 출력할 문자열에 형식지정문자 (Ex:%d)를 삽입하고 변수명은 " "안의 형식지정문자 뒤에 ,&변수명으로 지정한다 변수와 형식지정문자는 1대 1로 매핑된다
	if (muge > 100)  //다중 if-else문 : if문 ()내 주어진 여러 개의 조건식을 판단하여 참일 경우에 실행할 실행문과 거짓일 경우 실행할 여러 개의 실행문을 설정가능 
		printf("고도비만입니다.\n"); //if() 조건식이 [참] 일 만 실행
	else if (muge > 80) //if (조건식)  실행문;  else if (조건식) 실행문 ···else (조건식) 실행문 으로 사용
		printf("비만입니다.\n");
	else if (muge > 60) // > :  관계연산자이며 a > b의 뜻은 a가 b보다 크면 참이라는 의미이다.
		printf("표준입니다.\n");
	else
		printf("미달입니다.\n");
	
	printf("당신의 체중은 %d 키로 입니다.\n", muge);//printf() : 프로그램에서 모니터를 통하여 글자를 출력하는 기능을 제공함, \n : 줄을 바꾸는 제어문자
	//printf 함수 내 " " 안의 출력할 문자열에 형식지정문자 (Ex:%d)를 삽입하고 변수명은 " " 뒤에 ,로 구분하여 지정한다 변수와 형식지정문자는 1대 1로 매핑된다
}   //%d : 정수형 형식지정문자이며 부호 있는 10진수 형태의 숫자를 출력할 때 사용한다
