#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n; #include <bits/stdc++.h>

		using namespace std;

		void build(int l, int r, vector<int> const & a, vector<int> &d, int curD = 0) {
			if (r < l) {
				return;
			}
			if (l == r) {
				d[l] = curD;
				return;
			}
			int m = l;
			for (int i = l + 1; i <= r; i++) {
				if (a[m] < a[i]) {
					m = i;
				}
			}
			d[m] = curD;
			build(l, m - 1, a, d, curD + 1);
			build(m + 1, r, a, d, curD + 1);
		}

		void solve() {
			int n;
			cin >> n;
			vector<int> a(n);
			for (int &x : a) {
				cin >> x;
			}
			vector<int> d(n);
			build(0, n - 1, a, d);
			for (int x : d) {
				cout << x << " ";
			}
			cout << endl;
		}

		int main() {
			int t;
			cin >> t;
			while (t--) {
				solve();
			}
		}
		cin >> n;
		vector<int> a(n);
		for (auto &it : a) cin >> it;
		vector<pair<int, int>> res;
		int idx = -1;
		for (int i = 1; i < n; ++i) {
			if (a[i] != a[0]) {
				idx = i;
				res.push_back({1, i + 1});
			}
		}
		if (idx == -1) {
			cout << "NO" << endl;
			continue;
		}
		for (int i = 1; i < n; ++i) {
			if (a[i] == a[0]) {
				res.push_back({idx + 1, i + 1});
			}
		}
		cout << "YES" << endl;
		for (auto [x, y] : res) cout << x << " " << y << endl;
	}

	return 0;
}