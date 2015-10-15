//描述
//给定一段文本, 统计每个英文字母在其中的出现频率。忽略字母的大小写。
//
//输入
//一段文本, 以换行结束。
//
//输出
//不超过 26 行。按次序逐行输出各英文字母的出现次数, 未出现的字母忽略。 每一行的格式均为 :
//
//字母 : 出现次数
//	其中, 字母统一采用大写形式, 冒号为半角形式, 紧接冒号有个空格。
//
//	输入样例
//	Hello World!
//	输出样例
//	D : 1
//	E : 1
//	H : 1
//	L : 3
//	O : 2
//	R : 1
//	W : 1


#include<iostream>
#include<string>
using namespace::std;

int main() {
	string input;
	int i, len,count[26], index = 0;
	for (i = 0; i < 26; i++)
		count[i] = 0;
	getline(cin, input);
	len = input.size();
	
	for (i = 0; i < len; i++) {
		if ((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z')) {
			/*if (input[i] - 'a' >= 0)
				index = input[i] - 'a';
			else if(input[i] - 'A' >= 0)
				index = input[i] - 'A';*/
			(input[i] - 'a') > 0 ? (index = input[i] - 'a') : (index = input[i] - 'A');
			count[index]++;
		}
	}
	for (i = 0; i < 26; i++)
		if (count[i] > 0) {
			cout << (char)('A' + i) << ": " << count[i] << endl;
		}
	
	return 0;
}