#include <stdio.h>//#include <> �ش������̸� �ܺ��� ���� �Լ� �ҽ��ڵ� ����� ���ؼ� ���, stdio.h: ǥ��������Լ�
void main() //void : return�� ���� �ڷ��� �Լ� main() : C��� ���۽� ���� ���� ȣ��Ǵ� �Լ�
{
	char	name[20]; // �迭 : ���� ���� �����͸� �ϳ��� �迭 �̸����� �ٷ� �� �ֵ��� ���� ���� �޸� ����Ҹ� �����ϴ� �ڷ���, ����� -> �ڷ�� �迭��[�迭����];�� ����
	// ���ڿ� : ���ڵ��� ���ӵ� ����, �迭�� �� ���ҿ� ���ڵ��� �����Ͽ� ���ڿ��� ǥ�� 
	//char : 1����Ʈ ������ �ڷ����̸� -128���� 127������ ������ �ش�Ǵ� ���ڸ� ���尡�� ���� ����� char ������ ���� ����
	printf("�̸��� �Է��ϼ���\n"); //printf() : ���α׷����� ����͸� ���Ͽ� ���ڸ� ����ϴ� ����� ������, \n : ���� �ٲٴ� �����
	scanf("%s", name); //%s : ���ڿ��� �������������̸� ��������(���ڿ�)�� ���ڸ� ����� �� ����Ѵ� 

	printf("%s �� �ȳ��ϼ���\n", name);//printf �Լ� �� " " ���� ����� ���ڿ��� ������������ (Ex:%d)�� �����ϰ� �������� " " �ڿ� ,�� �����Ͽ� �����Ѵ� ������ �����������ڴ� 1�� 1�� ���εȴ�
}