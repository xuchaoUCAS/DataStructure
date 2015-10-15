//描述
//任给大于 1 的两个整数 A 和 B, 输出它们的最大公约数, 即能够同时整除 A 和 B 的最大正整数。
//
//输入
//共计一行, 含两个正整数 A 和 B。
//
//输出
//共计一行, 即 A 和 B 的最大公约数。
//
//输入样例1
//100 35
//输出样例1
//5
//输入样例2
//121 37
//输出样例2
//1
//限制
//1 ≤{ A, B } ≤ 109

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