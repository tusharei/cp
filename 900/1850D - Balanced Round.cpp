sort the array and check for largest subarray with <=k diff b/w adj ele. Your ans is n - largest window size

void solve() {
	ll n, k;
	cin >> n >> k;
	vi a(n);
	cin >> a;
	if (n == 1) {
		cout << 0 << endl;
		return;
	}
	sort(all(a));
	// cout << a << endl;
	ll i = 0, cnt = 0, ans = 0;
	while (i < n - 1) {
		if (a[i + 1] - a[i] <= k) {
			cnt++;
			ans = max(ans, cnt);
		}
		else {
			cnt = 0;
		}
		i++;
	}
	cout << n - ans - 1 << endl;
}
