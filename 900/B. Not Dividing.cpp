Since 2n operations can be used. We'll use n operations to add 1 to each element of array (to make sure no element is 1)
Now if (a[i + 1] % a[i] == 0) for any element we'll increment a[i+1]

void solve() {
	ll n;
	cin >> n;
	vi a(n);
	cin >> a;
	for (auto &i : a) i++;
	int i = 0;
	while (i < n - 1) {
		if (a[i + 1] % a[i] == 0) a[i + 1]++;
		i++;
	}
	cout << a << endl;
}
