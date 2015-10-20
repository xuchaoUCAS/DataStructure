/*一般实现一个斐波那契数列都是用递归的方法，但是分析一下时间复杂度大约是2(1.618)^n的复杂度、
这是指数型的复杂度，在n达到43之上时，算法所需要的时间将会难以忍受。
本例是对其的改进，思想是与递归的自顶向下相反，采取从下往上计算的方法，一旦一个元素被计算出来就存在数组之中
数组初始化为-1。这样，每次递归的时候，只需要查询数组就行，而不用每次都调用一次函数。可以在O(1)的时间内返回结果，空间复杂度也只需要O(N).
*/
#include<iostream>


using namespace std;
#define N 45
int fib(int n,int *a) {
	if (n < 3) {
		a[n] = n;
		return n;
	}
	else{
		if (a[n - 1] != -1) {
			a[n] = a[n - 1] + a[n - 2];
			return a[n - 1] + a[n - 2];
		}
			
	}
}

int main() {
	int *a = new int[N];
	for (int i = 0; i < N; i++)
		a[i] = -1;
	for (int i = 0; i < N; i++)
		cout << i << ": " << fib(i,a) << endl;
	return 0;
}

