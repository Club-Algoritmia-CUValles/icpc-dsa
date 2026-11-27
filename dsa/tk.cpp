#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	ll n;
	cin >> n;
	for (ll i = 1; i <= n; i++) {
		ll sol = (pow(i, 2) * (pow(i, 2) - 1)) / 2 - 4 * (i - 1) * (i - 2);
		cout << sol << "\n";
	}
	return 0;
}
