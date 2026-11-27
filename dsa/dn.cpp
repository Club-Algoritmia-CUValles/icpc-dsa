#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define si unordered_set<int>
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	vi x(n);
	for (int i = 0; i < n; i++)
		cin >> x[i];
	sort(x.begin(), x.end());
	x.erase(unique(x.begin(), x.end()), x.end());
	cout << x.size() << "\n";
	return 0;
}
