//描述
//任给一个形如“A op B”的表达式, 计算它的值。其中操作数 A 和 B 都是正整数, 运算符 op 可以是 + 、‐或*, 分别表示加、减、乘。
//
//运算符有且只有一个, 除了 A 和 B 的内部不能有空格外(例如 123 不能写成 12 3), 其余位置均可能有空格甚至多个空格, 但不包含制表符 TAB。
//
//输入
//共计一行, 即表达式“A op B”。
//
//输出
//共计一行, 即表达式的值。
//
//输入样例1
//100 + 200
//输出样例1
//300
//输入样例2
//100 - 200
//输出样例2
//- 100
//限制
//1 ≤{ A, B } ≤ 106

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