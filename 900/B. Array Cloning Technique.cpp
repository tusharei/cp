get the lasgest occuring element and try to make the whole array with that element

void solve() {
	ll n;
	cin >> n;
	vi a(n);
	cin >> a;
	map<int, int> mp;
	for (int i = 0; i < n; i++)
		mp[a[i]]++;
 
	// find the max frequency
	ll max_count = 0;
	for (auto i : mp) {
		if (max_count < i.second) {
			max_count = i.second;
		}
	}
	ll ans = 0;
	while (max_count < n) {
		ans++; // clone
		ans += min(max_count, n - max_count);
		max_count += max_count;
	}
	cout << ans << endl;
}
