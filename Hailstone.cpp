#include<iostream>
#include<list>

using namespace std;

typedef list<int> Mylist;
Mylist::iterator i;

Mylist Hailstone(int n, Mylist mylist) {
	if (n == 1) {
		return mylist;
	}
	else if (n % 2 == 0){
		mylist.push_back(n / 2);
		return Hailstone(n / 2, mylist);
	}
	else if (n % 2 == 1){
		mylist.push_back(3 * n + 1);
		return Hailstone(3 * n +1,mylist);
	}
}

int main(){
	int n;
	Mylist mylist;
	cin >> n;
	mylist.push_back(n);
	mylist = Hailstone(n, mylist);
	for (i = mylist.begin(); i != mylist.end(); i++) {
		cout << *i << " ";
	}
	return 0;
}