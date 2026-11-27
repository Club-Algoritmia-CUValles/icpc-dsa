#include <bits/stdc++.h>
using namespace std;
int ggcd(int a, int b) {
	if (!a || !b)
		return a | b;
	unsigned shift = __builtin_ctz(a | b);
	a >>= __builtin_ctz(a);
	do {
		b >>= __builtin_ctz(b);
		if (a > b)
			swap(a, b);
		b -= a;
	} while (b);
	return a << shift;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, K, flag = 0;

	cin >> N;

	vector<int> V(N);

	for (int i = 0; i < N; i++) {
		cin >> V[i];
	}

	flag = ggcd(V[0], V[1]);

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {

			K = ggcd(V[i], V[j]);

			if (K != flag) {
				cout << "NO" << endl;
				return 0;
			}
		}
	}

	cout << "YES" << endl;
}
