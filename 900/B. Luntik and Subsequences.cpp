Its 2^cnt0 * cnt1

void solve() {
	ll n, cnt0 = 0, cnt1 = 0;
	cin >> n;
	while (n--) {
		ll i;
		cin >> i;
		if (i == 0) cnt0++;
		if (i == 1) cnt1++;
	}
	cout << (1ll << cnt0) * (ll)cnt1 <<  endl; // 2^cnt0 * cnt1
}
