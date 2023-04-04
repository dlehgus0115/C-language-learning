#include <stdio.h> //#include <> 해더파일이며 외부의 변수 함수 소스코드 사용을 위해서 사용
//stdio.h : 표준 입출력 함수 standard input output의 약자이며 printf scanf 함수와 같은 파일 입출력 함수를 포함하고 있다
void main() { /*void : return(반환값)이 없는 자료형 함수, main() : C언어가 시작될 때 가장 먼저 호출되는 함수이며 
반드시 하나 이상은 포함해야 한다*/
	printf("Hello world!\n"); //printf() : 프로그램에서 모니터를 통하여 글자를 출력하는 기능을 제공함, 문자열을 출력할때는 괄호()안에 ""를 붙혀서 사용함
	                         // \n : 줄을 바꾸는 제어문자
}
