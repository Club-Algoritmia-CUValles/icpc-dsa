#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vvi vector<vector<int>>
#define vp vector<vector<pair<int, int>>>

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M, O;
	cin >> N >> M >> O;
	vi cant(N);
	for (int i = 0; i < N; i++) {
		cin >> cant[i];
	}

	vp recetas(M);
	for (int d = 0; d < M; d++) {
		int mi;
		cin >> mi;
		for (int j = 0; j < mi; j++) {
			int i, q;
			cin >> i >> q;
			i--;
			recetas[d].push_back({i, q});
		}
	}
	vvi ordenes(O);
	for (int o = 0; o < O; o++) {
		int oi;
		cin >> oi;
		for (int j = 0; j < oi; j++) {
			int r;
			cin >> r;
			r--;
			ordenes[o].push_back(r);
		}
	}
	int ans = 0;
	for (auto &orden : ordenes) {
		vi req(N, 0);
		bool t = true;
		for (auto dish : orden) {
			for (auto &[id, quant] : recetas[dish]) {
				req[id] += quant;
				if (req[id] > cant[id]) {
					t = false;
					break;
				}
			}
			if (!t)
				break;
		}
		if (t) {
			for (int i = 0; i < N; i++) {
				cant[i] -= req[i];
			}
			ans++;
		} else {
			break;
		}
	}
	cout << ans << "\n";

	return 0;
}
