Three cases 
1. Fix last element and take smallest from rotating remaining subsegment
2. Fix first element and take largest from rotating remaining subsegment
3. Rotate whole array

void solve() {
	int n;
	cin >> n;
	vi a(n);
	cin >> a;
	int ans = INT_MIN;
	for (int i = 0; i < n; i++) {
		ans = max(ans, a[n - 1] - a[i]); // fix last
		ans = max(ans, a[i] - a[0]); // fix first
		ans = max(ans, a[i] - a[(i + 1) % n]); // fix none
	}
	cout << ans << endl;
}
