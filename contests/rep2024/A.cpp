#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	vector<pair<string, string>> dict(N);
	for (int i = 0; i < N; ++i) {
		cin >> dict[i].second;
		dict[i].first = dict[i].second;
		sort(dict[i].first.begin(), dict[i].first.end());
	}

	sort(dict.begin(), dict.end());

	int Q;
	cin >> Q;
	while (Q--) {
		string b;
		cin >> b;

		string fb = b;
		sort(fb.begin(), fb.end());
		pair<string, string> target = {fb, b};

		auto it = upper_bound(dict.begin(), dict.end(), target);

		cout << distance(dict.begin(), it) << "\n";
	}

	return 0;
}
