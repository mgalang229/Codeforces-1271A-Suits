#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long a, b, c, e, d, f;
	cin >> a >> b >> c >> d >> e >> f;
	long long n1 = min(a, d);
	long long ans1 = (n1 * e) + min(b, min(c, d - n1)) * f;
	long long n2 = min(b, min(c, d));
	long long ans2 = (n2 * f) + (min(a, d - n2) * e);
	cout << max(ans1, ans2) << '\n';
	return 0;
}
