//����
//����һ���ı�, ͳ��ÿ��Ӣ����ĸ�����еĳ���Ƶ�ʡ�������ĸ�Ĵ�Сд��
//
//����
//һ���ı�, �Ի��н�����
//
//���
//������ 26 �С����������������Ӣ����ĸ�ĳ��ִ���, δ���ֵ���ĸ���ԡ� ÿһ�еĸ�ʽ��Ϊ :
//
//��ĸ : ���ִ���
//	����, ��ĸͳһ���ô�д��ʽ, ð��Ϊ�����ʽ, ����ð���и��ո�
//
//	��������
//	Hello World!
//	�������
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