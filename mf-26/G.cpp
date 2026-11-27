#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define F first
#define S second

typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;

const int MOD = 1e9 + 7;
const int INF = 2e18;


struct sender {
	int receiver;
	int messages; 
};

void solve() {
	map<int, sender> chat;
	int N, M; cin>>N>>M;
	vi A(M);
	for(int i=0; i<M; i++) cin>>A[i];

	for(int i=1; i<=N; i++){
		chat[i] = sender{0, 0};
	}


	for(int i=0; i<M; i++){
		if(chat[A[i]].messages == 0){
			if(A[i] == N){
				chat[1].messages++;
				chat[1].receiver = A[i];
			} else {
				chat[A[i] + 1].messages++;
				chat[A[i] + 1].receiver = A[i];
			}
		} else {
			auto last = chat[A[i]].receiver;
			chat[last].messages++;
			chat[last].receiver = A[i];
		}
	}

	for(auto [k, v]: chat){
		cout<<v.messages<<" ";
	}
    cout<<"\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    // cin >> tc;
    while (tc--) solve();
    return 0;
}
