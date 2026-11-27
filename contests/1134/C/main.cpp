#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define F first
#define S second

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;

const int MOD = 1e9 + 7;
const int INF = 2e18;

pii visibility(const vi &a) {
	int left = 0, right = 0;

	int mx = LLONG_MIN;
	for (int x : a) {
		if (x > mx) {
			left++;
			mx = x;
		}
	}

	mx = LLONG_MIN;
	for (int i = sz(a) - 1; i >= 0; i--) {
		if (a[i] > mx) {
			right++;
			mx = a[i];
		}
	}

	return {left, right};
}

void solve() {
	// solution
	int n;
	cin >> n;
	vi h(n);
	vi res(n);
	for (int i = 0; i < n; i++)
		cin >> h[i];
	sort(h.begin(), h.end());
	int p = (n - 1) / 2;
	int k = n - 1;
	res[p] = h[k--];

	for (int i = p - 1; i >= 0; i--) {
		res[i] = h[k--];
	}

	for (int i = p + 1; i < n; i++) {
		res[i] = h[k--];
	}

	for (auto v : res) {
		cout << v << " ";
	}
	cout << "\n";

	auto [l, r] = visibility(res);

	cerr << "Left: " << l << "\n";
	cerr << "Right: " << r << "\n";
	cerr << "Total: " << l + r << "\n";
}

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int tc = 1;
	cin >> tc;
	while (tc--)
		solve();
	return 0;
}
