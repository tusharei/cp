we will add the time with tools only when the bomb reaches 1 to get max time possible
but we cant add more than a time so for each tool the time will be min(a-1, xi)
add the initial time 'b' as well in the ans;

void solve() {
	ll a, b, n;
	cin >> a >> b >> n;
	ll ans = b;
	fl(i, n) {
		ll xi;
		cin >> xi;
		ans += min(a - 1, xi);
	}
	cout << ans << endl;
}
