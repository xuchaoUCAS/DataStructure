/*LCS����Ӵ����������������ַ����У�����������ַ�����ͬӵ�е����ַ����ĳ��ȡ�����s:hello��t:pillow �����3(llo)
��쳲���������һ�������������򵥵ķ������ǵݹ飬�������ַ�����ĩβ��ʼ�������ͬ������һ�������ͬ����s[0,n)��t[0,m]
�Լ�s[0,n]��t[0,m)��ȡ�ϴ�ֵ��������Ȼ���ٺ�쳲��������еݹ鷽��һ�������⣺ʱ�临�Ӷ�̫�ߡ�
���Ƶģ���ȡ��̬�滮�ķ�������ͷ��ʼһ�μ��㣬ÿ�μ���֮��������һ����ά����֮�С������ͬ��ȡ���Ͻǵ���ֵ��һ�������ͬ��ȡ
��ֵ����ֵ�ýϴ�ֵ����Ҫע����ǣ����뱣֤���ϡ�����ֵ�Ѿ����ڡ�������ʱ�临�Ӷ�ΪO(2^n),�ռ临�Ӷ�ΪO(n*m);
*/

#include<iostream>
#include<string>

using namespace std;

int max(int a, int b) {
	return a > b ? a : b;
}

int dynamic(string s, string t) {
	int n = s.length();
	int m = t.length();
	int **a = new int *[n + 1];
	for (int i = 0; i <= n; i++)
		a[i] = new int[m + 1];
	for (int i = 0; i <= n; i++) 
		a[0][i] = 0;
	for (int j = 0; j <= m; j++)
		a[j][0] = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			if (s[i] == t[j])
				a[i + 1][j + 1] = a[i][j] + 1;
			else
				a[i + 1][j + 1] = max(a[i][j + 1], a[i + 1][j]);
		}
	return a[n][m];
}

int recursion(string s, string t) {
	int n = s.length();
	int m = t.length();
	if (s.length() == 0 || t.length() == 0)
		return 0;
	else if (s[n - 1] == t[m - 1])
		return 1 + recursion(s.substr(0, n - 1), t.substr(0, m - 1));
	else 
		return max(recursion(s.substr(0, n - 1), t), recursion(s, t.substr(0, m - 1)));
	
}

int main() {
	string s, t;
	cin >> s >> t;
	cout << recursion(s, t) << endl;
	cout << "dynamic:" << dynamic(s, t) << endl;
	return 0;
}