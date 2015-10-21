/*LCS：最长子串：在两个给定的字符串中，计算出两个字符串共同拥有的子字符串的长度。例：s:hello；t:pillow 结果：3(llo)
和斐波那契数列一样。这个问题最简单的方法还是递归，从两个字符串的末尾开始，如果相同则结果加一，如果不同则在s[0,n)和t[0,m]
以及s[0,n]和t[0,m)中取较大值。但是依然面临和斐波那契数列递归方法一样的问题：时间复杂度太高。
类似的，采取动态规划的方法。从头开始一次计算，每次计算之后结果计入一个二维数组之中。如果相同则取左上角的数值加一。如果不同则取
左值和上值得较大值。需要注意的是，必须保证左上、左、上值已经存在。这样，时间复杂度为O(2^n),空间复杂度为O(n*m);
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