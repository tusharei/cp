direct bruteforce
void solve() {
	ll n;
	cin >> n;
	vi a(n);
	cin >> a;
	for (int i = 1; i < n - 1; i++) {
		if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
			py;
			cout << i << ' ' << i + 1 << ' ' << i + 2 << endl;
			return;
		}
	}
	pn;
}
