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

void solve() {
	// solution
	int R, C;
	cin >> R >> C;
	if (C == R && (R <= 4)) {
		cout << "*\n";
	} else if (R || C) {
		cout << "1 1\n";
	} else {
		cout << "1 2\n";
	}
}

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int tc = 1;
	// cin >> tc;
	while (tc--)
		solve();
	return 0;
}
