Use prefix sum to precumpute the sum at each index. Now to check if the array sum is odd its one liner
ie.  pref[n] - (pref[r] - pref[l - 1]) + k * (r - l + 1);

ll a[200005], pref[200005];
void solve() {
	ll n, q;
	cin >> n >> q;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		pref[i] = pref[i - 1];
		pref[i] += a[i];
	}
	while (q--) {
		ll l, r, k;
		cin >> l >> r >> k;
		// l--; r--;
		ll ans = pref[n] - (pref[r] - pref[l - 1]) + k * (r - l + 1);
		if (ans & 1) py;
		else pn;
	}
}
