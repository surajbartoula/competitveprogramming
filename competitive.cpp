#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pi;

const int N = 0;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	vi v = {4, 2, 5, 3, 5, 8, 3};
	sort(v.begin(), v.end());
	for (auto i = v.begin(); i != v.end(); ++i)
		cout << *i << " ";
}