//����
//�θ����� 1 ���������� A �� B, ������ǵ����Լ��, ���ܹ�ͬʱ���� A �� B �������������
//
//����
//����һ��, ������������ A �� B��
//
//���
//����һ��, �� A �� B �����Լ����
//
//��������1
//100 35
//�������1
//5
//��������2
//121 37
//�������2
//1
//����
//1 ��{ A, B } �� 109

#include<iostream>

using namespace::std;

long divisor(long a, long b) {
	long e = 1;
	while (e) {
		e = a % b;
		a = b;
		b = e;
	}
	return a;
}
int main() {
	long a, b;
	cin >> a >> b;
	cout << divisor(a, b) << endl;
	return 0;
}