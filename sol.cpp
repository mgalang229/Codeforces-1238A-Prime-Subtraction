#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long x, y;
		cin >> x >> y;
		// check if the difference of 'x' and 'y' is greater than 1
		// proof:
		// x - y = z
		// if z has a prime divisor p -> (z / p), then we can subtract p
		// from x in (z / p) times
		cout << (x - y > 1 ? "YES" : "NO") << '\n';
	}
	return 0;
}
