#include <stdio.h>//#include <> �ش������̸� �ܺ��� ���� �Լ� �ҽ��ڵ� ����� ���ؼ� ���, stdio.h: ǥ��������Լ�
void main() //void : return�� ���� �ڷ��� �Լ� main() : C��� ���۽� ���� ���� ȣ��Ǵ� �Լ�
{
	char str1[50] = "C ���� ���ڿ��� ����մϴ�\n"; //char : 1����Ʈ ������ �ڷ����̸� -128���� 127������ ������ �ش�Ǵ� ���ڸ� ���尡�� ���� ����� char ������ ���� ����
	char str2[100] = "���ڿ��� �����ϱ� ���ؼ� �迭�� �̿��մϴ�\n"; // c���� ���� �����԰� ���ÿ� �������� �����ϴ� ���� �����ϴ�.
	// �迭 : ���� ���� �����͸� �ϳ��� �迭 �̸����� �ٷ� �� �ֵ��� ���� ���� �޸� ����Ҹ� �����ϴ� �ڷ���, ����� -> �ڷ�� �迭��[�迭����];�� ����
	// ���ڿ� : ���ڵ��� ���ӵ� ����, �迭�� �� ���ҿ� ���ڵ��� �����Ͽ� ���ڿ��� ǥ�� 
	printf("���ڿ�1: %s", str1); //%s : ���ڿ��� �������������̸� ��������(���ڿ�)�� ���ڸ� ����� �� ����Ѵ� 
	printf("���ڿ�2: %s", str2); //printf() : ���α׷����� ����͸� ���Ͽ� ���ڸ� ����ϴ� ����� ������
}//printf �Լ� �� " " ���� ����� ���ڿ��� ������������ (Ex:%d)�� �����ϰ� �������� " " �ڿ� ,�� �����Ͽ� �����Ѵ� ������ �����������ڴ� 1�� 1�� ���εȴ�
 //\n : ���� �ٲٴ� �����
