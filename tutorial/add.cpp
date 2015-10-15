//simple A+B example
/*
描述
给两个正整数A和B, 输出它们的和C = A + B。

输入
共计一行, 含两个正整数 A 和 B。

输出
共计一行, 含一个正整数, 即 A 与 B 之和 C。

输入样例
100 200
输出样例
300
限制
1 ≤{ A, B } ≤ 106
*/
#include<iostream>

using namespace::std;
int main() {
	long a, b;                         //need a long type because of the '10^6' limit
	cin >> a >> b;
	cout << a + b << endl;
	return 0;
}