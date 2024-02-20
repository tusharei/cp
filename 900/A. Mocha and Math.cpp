take & of all ele

void solve() {
	ll n;
	cin >> n;
	vi a(n);
	cin >> a;
	ll ans = a[0];
	for (int i = 1; i < n; i++) {
		ans &= a[i];
	}
	cout << ans << endl;
}
