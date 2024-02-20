Only test case 3 was meaningfull

void solve() {
	ll n, k;
	cin >> n >> k;
	vi a(n * k);
	cin >> a;
	ll sum = 0;
	if (n & 1)  { //If ODD
		ll medianInd = n / 2 + 1;
		ll lastInd = n * k; // 1 based indexing
		while (k--) {
			sum += a[lastInd - medianInd];
			lastInd -= medianInd;
		}
	}
	else { // EVEN
		ll medianInd = n / 2;
		ll lastInd = n * k;
		while (k--) {
			sum += a[lastInd - medianInd - 1];
			lastInd = lastInd - medianInd - 1;
		}
	}
	cout << sum << endl;
}
 
