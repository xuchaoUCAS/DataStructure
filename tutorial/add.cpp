//simple A+B example
/*
����
������������A��B, ������ǵĺ�C = A + B��

����
����һ��, ������������ A �� B��

���
����һ��, ��һ��������, �� A �� B ֮�� C��

��������
100 200
�������
300
����
1 ��{ A, B } �� 106
*/
#include<iostream>

using namespace::std;
int main() {
	long a, b;                         //need a long type because of the '10^6' limit
	cin >> a >> b;
	cout << a + b << endl;
	return 0;
}