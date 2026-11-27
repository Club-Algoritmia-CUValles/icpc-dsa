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
	int H, M;
	cin >> H >> M;

	int tm = H * 60 + M;

	int N;
	cin >> N;

	int ans = 0;

	for (int i = 0; i < N; i++) {
		int x, y;
		cin >> x >> y;

		int used = min(tm, x);

		ans += used * y;
		tm -= used;
	}

	cout << ans << "\n";
}
/*
void solve() {
    int H, M;
    cin >> H >> M;
    int hm = H * 60;
    int tm = M + hm;
    // 1 10 -> 60 + 10 = 70 min
    // 60 1
    // 20 100
    // maxt = 60 + 20 -> 80 -> calc
    // 60 (1) + 10 (1000)
    //
    // 23 59 -> 1380 + 59 = 1439
    // maxt = 30 = 10 (10) + 20 (20)
    int N;
    cin >> N;
    vector<pair<int, int>> rates(N);
    int maxt = 0;
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        rates[i] = {x, y};
        maxt += x;
    }

    if (tm > maxt) {
        int ans = 0;
        for (const auto &[x, y] : rates) {
            ans += x * y;
        }
        cout << ans << "\n";
    } else {
        sort(rates.begin(), rates.end(),
             [](const auto &a, const auto &b) { return a.second < b.second; });

        int ans = 0;
        for (const auto &[x, y] : rates) {
            if (tm > 0) {
                // 100
                //
                int tiempo_aplicado = 0;
                // best x 20
                // worst tm = 10,
                tiempo_aplicado = min(tm, x); // (70, 60)
                // (tiempo aplicado) x y
                tm -= tiempo_aplicado;
                ans += tiempo_aplicado * y;
            }
        }
        cout << ans << "\n";
    }
}


*/

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int tc = 1;
	// cin >> tc;
	while (tc--)
		solve();
	return 0;
}
