#include <stdio.h>//#include <> �ش������̸� �ܺ��� ���� �Լ� �ҽ��ڵ� ����� ���ؼ� ���, stdio.h: ǥ��������Լ�
void main() //void : return�� ���� �ڷ��� �Լ� main() : C��� ���۽� ���� ���� ȣ��Ǵ� �Լ�
{
	int		a, b; //int : 4����Ʈ �������� ó���ϱ� ���� �ڷ����̸� -214783648���� 2147483647���� ������ ���尡�� ���� ����� int ������ �� ���� ����
	double c; //double : 4����Ʈ �Ǽ��� �ڷ����̸� ��1.7*10^-306���� ��1.7*10^306���� �Ǽ��� ���尡�� ǥ���� �����߻����� ���� ����� double ������ ���� ����

	a = 5; // = :  �ܼ����� �������̸� = ������ ������ �������� ���� ������ �� ��� Ex) a = 10 -> a�� 10�̴�
	b = 2;
	c = (double)a / b; //  / : ����������̸� c = a / b�� ���� a�� b�� ���� ���� �����  c�� �����϶�� �ǹ��̴�.
	// ����ȯ(Cast) : �����ڶ� �����͸� ���ϴ� ������ �ڷ������� ��ȯ��Ű�� ���̸� ������1 = (��ȯ�ϰ��� �ϴ� ������)������2�� ���� ����Ѵ� 
	printf("%d�� %d�� ������ %f �Դϴ�\n", a, b, c); //printf() : ���α׷����� ����͸� ���Ͽ� ���ڸ� ����ϴ� ����� ������, \n : ���� �ٲٴ� �����
	//printf �Լ� �� " " ���� ����� ���ڿ��� ������������ (Ex:%d)�� �����ϰ� �������� " " �ڿ� ,�� �����Ͽ� �����Ѵ� ������ �����������ڴ� 1�� 1�� ���εȴ�
	//%d : ������ �������������̸� ��ȣ �ִ� 10���� ������ ���ڸ� ����� �� ����Ѵ�
	//%f : �ε��Ҽ������� �������������̸� �Ҽ����� �ִ� �Ǽ� ������ ���ڸ� ����� �� ����Ѵ� 
	// ���⼭�� ����ȯ �����ڷ� �������� �ٲ�⿡ 2.500000��� �������� ���� ��µȴ�.
}