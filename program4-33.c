#include <stdio.h>//#include <> 해더파일이며 외부의 변수 함수 소스코드 사용을 위해서 사용, stdio.h: 표준입출력함수
void main() //void : return값 없는 자료형 함수 main() : C언어 시작시 가장 먼저 호출되는 함수
{
	int		num1, num2, num3; //int : 4바이트 정수형을 처리하기 위한 자료형이며 -214783648부터 2147483647까지 정수를 저장가능 변수 선언시 int 변수명 과 같이 선언
	int		min;
	int		n;

	printf("첫번째 수를 입력하세요: ");
	scanf("%d", &num1); // scanf: 표준입력함수이며 키보드를 통해서 데이터를 입력하는 기능을 제공한다 & 변수는 메모리 공간에서의 변수에 대한 주소를 구하기 위해 변수명 앞에 반드시 선언해야 한다
	//사용시 scanf 함수 내 " " 안의 출력할 문자열에 형식지정문자 (Ex:%d)를 삽입하고 변수명은 " "안의 형식지정문자 뒤에 ,&변수명으로 지정한다 변수와 형식지정문자는 1대 1로 매핑된다
	printf("두번째 수를 입력하세요: ");
	scanf("%d", &num2);
	printf("세번째 수를 입력하세요: ");
	scanf("%d", &num3);

	min = (num1 < num2) ? num1 : num2; // 조건 연산자이며 형식은 조건식 ? 실행문1 : 실행문2; 이다 조건식의 결과가 참일때 실행문1 실행 거짓일시 실행문2 실행된다
	min = (min < num3) ? min : num3;

	printf("%d, %d, %d 의 공약수는 ", num1, num2, num3); //printf 함수 내 " " 안의 출력할 문자열에 형식지정문자 (Ex:%d)를 삽입하고 변수명은 " " 뒤에 ,로 구분하여 지정한다 변수와 형식지정문자는 1대 1로 매핑된다

	for (n = min; n >0; n--)// for문 : 반복 제어문이며 for(초기화식; 조건식; 증감식;) 으로 구성 
		// 초기화식 : for 문 실행될 때 처음에 한번만 실행, 조건식 : 거짓일 시 실행문 블록 미실행 후 다음 코드 실행 참일 시 실행문 블록 실행 및 증감식 실행
	{
		if ((num1 % n == 0) && (num2 % n == 0) && (num3 % n == 0)) //if문 : if문 ()내 주어진 조건식을 판단하여 참일 경우에만 실행문을 실행 if (조건식) {실행문;}으로 사용, == :  관계연산자이며 a == b의 뜻은 a와 b가 같으면 참이라는 의미이다.
			break;  // break : switch, while, for문에서 빠져나오는 기능을 수행 혹은 switch 문의 괄호에서 빠져나오는 기능을 수행
		// --: 증감연산자이며 a--의 뜻은 실행문을 실행한 후에 a의 값을 1 감소하라는 의미이다.
	} printf("입니다\n");
	//%d : 정수형 형식지정문자이며 부호 있는 10진수 형태의 숫자를 출력할 때 사용한다
}  // > :  관계연산자이며 a > b의 뜻은 a가 b보다 크면 참이라는 의미이다.