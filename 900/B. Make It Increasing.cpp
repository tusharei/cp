Start from right and /2 every element till its smaller than right adj ele.
if(a[i] == a[i+1]) at any instance return -1;

void solve() {
	ll n, cnt = 0;
	cin >> n;
	vi a(n);
	cin >> a;
	for (int i = n - 2; i >= 0; i--) {
		while (a[i] >= a[i + 1] && a[i] > 0) {
			cnt++;
			a[i] /= 2;
		}
		if (a[i] == a[i + 1]) {
			cout << -1 << endl;
			return;
		}
	}
	cout << cnt << endl;
}
