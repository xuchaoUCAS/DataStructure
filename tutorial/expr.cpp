//����
//�θ�һ�����硰A op B���ı��ʽ, ��������ֵ�����в����� A �� B ����������, ����� op ������ + ���\��*, �ֱ��ʾ�ӡ������ˡ�
//
//���������ֻ��һ��, ���� A �� B ���ڲ������пո���(���� 123 ����д�� 12 3), ����λ�þ������пո���������ո�, ���������Ʊ�� TAB��
//
//����
//����һ��, �����ʽ��A op B����
//
//���
//����һ��, �����ʽ��ֵ��
//
//��������1
//100 + 200
//�������1
//300
//��������2
//100 - 200
//�������2
//- 100
//����
//1 ��{ A, B } �� 106

#include<iostream>

using namespace::std;
long opration(long a, long b, char op) {
	switch (op) {
	case '+':
		return a + b;
		break;
	case '-':
		return a - b;
		break;
	default:
		return a * b;
		break;
	}
}
int main() {
	long a, b;
	char op;
	cin >> a >> op >> b;

	cout << opration(a ,b, op)<< endl;
	return 0;
}