since 2, 3 and 5 are prime if any number is divisible by them the whole array product will be divisible
for k = 4 if >=2 even number are present in array the number is divisible by 4
for number of operations find min of (k-(a[i]%k)) in the whole array

void solve() {
	ll n, k;
	cin >> n >> k;
	vi a(n);
	cin >> a;
	ll ans = INT_MAX, even = 0;
	fl(i, n) {
		if (a[i] % k == 0) {
			ans = 0;
		}
		ans = min(ans, k - (a[i] % k));
		if (a[i] % 2 == 0) even++;
	}
	if (k == 4) { // check if 2 even are present
		ans = min(ans, max(0ll, 2 - even));
	}
	cout << ans << endl;
}
