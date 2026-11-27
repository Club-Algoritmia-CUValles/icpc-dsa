#include <bits/stdc++.h>
using namespace std;
#define si set<int>
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	int ts = n * (n + 1) / 2;
	if (ts % 2 != 0 || n % 4 == 1 || n % 4 == 2) {
		cout << "NO\n";
	} else {
		cout << "YES\n";
		if (n % 4 == 0) {
			si A, B;
			for (int i = 1; i <= n; i += 4) {
				A.insert(i);
				A.insert(i + 3);
				B.insert(i + 1);
				B.insert(i + 2);
			}
			cout << A.size() << "\n";
			for (auto e : A) {
				cout << e << " ";
			}
			cout << "\n";
			cout << B.size() << "\n";
			for (auto e : B) {
				cout << e << " ";
			}
		} else if (n % 4 == 3) {
			si A = {1, 2}, B = {3};
			for (int i = 4; i <= n; i += 4) {
				A.insert(i);
				A.insert(i + 3);
				B.insert(i + 1);
				B.insert(i + 2);
			}
			cout << A.size() << "\n";
			for (auto e : A) {
				cout << e << " ";
			}
			cout << "\n";
			cout << B.size() << "\n";
			for (auto e : B) {
				cout << e << " ";
			}
		}
	}
	return 0;
}
