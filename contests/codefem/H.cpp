#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll N, C;
	cin >> N >> C;
	ll req = 0;
	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		req += tmp;
	}

	if (req <= C) {
		cout << "YES " << C - req << "\n";
	} else {
		cout << "NO " << req - C << "\n";
	}
	return 0;
}
