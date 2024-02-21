Notice a pattern 
case 1: n even 
  0 => n
  1 => n-1
  2 => n+1
  3 => n+4
  4 => n
  5 => n-5
  6 => n+1
  7 => n+8
  8 => n
case 2: n odd (same just change in sign)


  void solve() {
	ll n, k;
	cin >> n >> k;
	// PATTERN Problem
	if (n % 2 == 0) { // even
		if (k % 4 == 0) {
			cout << n << endl; return;
		}
		if (k % 4 == 1) {
			cout << n - k << endl; return;
		}
		if (k % 4 == 2) {
			cout << n + 1 << endl; return;
		}
		else {
			cout << n + k + 1 << endl; return;
		}
	}
	else { // odd
		if (k % 4 == 0) {
			cout << n << endl; return;
		}
		if (k % 4 == 1) {
			cout << n + k << endl; return;
		}
		if (k % 4 == 2) {
			cout << n - 1 << endl; return;
		}
		else {
			cout << n - (k + 1) << endl; return;
		}
	}
}
