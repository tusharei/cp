minBeauty is when you take sum of all ele and take ceil(sum/k)
maxBeauty is when you individualy take ceil(ele/k) and add them.
IMP -> Method to take ceil(x/k) => (x+(k-1)/k

void solve() {
	ll n, k;
	cin >> n >> k;
	vector<ll> a(n);
	ll sum = 0;
	for (auto &i : a) {
		cin >> i;
		sum += i;
	}
	ll minBeauty = (sum + (k - 1)) / k; // same as ceil(sum/k)
	ll maxBeauty = 0;
	fl(i, n) {
		maxBeauty += (a[i] + (k - 1)) / k; // ceil(a[i]/k)
	}
	cout << minBeauty << ' ' << maxBeauty << endl;
}
