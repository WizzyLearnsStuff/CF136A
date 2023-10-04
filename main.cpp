#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> v(n);

	for (int i = 1; i <= n; i++) {
		int b;
		cin >> b;

		v[--b] = i;
	}

	for (int &e : v) cout << e << ' ';
}
