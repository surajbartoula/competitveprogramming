#include <bits/stdc++.h>
using namespace std;

int n, m;
char S[1100];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> S;
		for (int j = 0; j < m; j++)
			if (S[j] == '.') {
				if ((i + j) % 2 != 0)
					S[j] = 'W';
				else
					S[j] = 'B';
			}
		cout << S << endl;
	}
}