#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a, b, c, e, d, f;
	cin >> a >> b >> c >> d >> e >> f;
	long long ans = 0;
	while (d--) {
		if (a && b && c) {
			if (e > f) {
				ans += e;
				a--;
			} else {
				ans += f;
				b--;
				c--;
			}
		} else if (a) {
			ans += e;
			a--;
		} else if (b && c) {
			ans += f;
			b--;
			c--;
		} else {
			break;
		}
	}
	cout << ans << '\n';
	return 0;
}
