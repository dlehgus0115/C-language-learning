#include <stdio.h>//#include <> �ش������̸� �ܺ��� ���� �Լ� �ҽ��ڵ� ����� ���ؼ� ���, stdio.h: ǥ��������Լ�
void main() //void : return�� ���� �ڷ��� �Լ� main() : C��� ���۽� ���� ���� ȣ��Ǵ� �Լ�
{
	int su; //int : 4����Ʈ �������� ó���ϱ� ���� �ڷ����̸� -214783648���� 2147483647���� ������ ���尡�� ���� ����� int ������ �� ���� ����
	printf("�������Է��ϼ��� :");
	scanf("%d", &su); // scanf: ǥ���Է��Լ��̸� Ű���带 ���ؼ� �����͸� �Է��ϴ� ����� �����Ѵ� & ������ �޸� ���������� ������ ���� �ּҸ� ���ϱ� ���� ������ �տ� �ݵ�� �����ؾ� �Ѵ�
	//���� scanf �Լ� �� " " ���� ����� ���ڿ��� ������������ (Ex:%d)�� �����ϰ� �������� " "���� ������������ �ڿ� ,&���������� �����Ѵ� ������ �����������ڴ� 1�� 1�� ���εȴ�
	if (su > 95)  //if-else�� : if�� ()�� �־��� ���ǽ��� �Ǵ��Ͽ� ���� ��쿡 ������ ���๮�� ������ ���  ������ ���๮�� �������� if (���ǽ�) {���๮;} else {���๮}���� ���
	{
		printf("����� �����Դϴ�.\n"); //if() ���ǽ��� [��] �� ���� ����
	}
	else
	{
		printf("�� �� ����ϼ���.\n");
	}

	printf("����� ������ %d���Դϴ�.\n", su);//printf() : ���α׷����� ����͸� ���Ͽ� ���ڸ� ����ϴ� ����� ������, \n : ���� �ٲٴ� �����
	//printf �Լ� �� " " ���� ����� ���ڿ��� ������������ (Ex:%d)�� �����ϰ� �������� " " �ڿ� ,�� �����Ͽ� �����Ѵ� ������ �����������ڴ� 1�� 1�� ���εȴ�
}   //%d : ������ �������������̸� ��ȣ �ִ� 10���� ������ ���ڸ� ����� �� ����Ѵ�