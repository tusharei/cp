Eqn => 4x + 6y = n
=> 2x + 3y = n/2

if n is odd print -1

For min choose y if n%y == 0 else y+1
for max its x only (no need for x+1 since n is now even due to base case)

void solve() {
	ll n;
	cin >> n;
	if (n & 1 or n <= 2) {
		pm;
		return;
	}

	n /= 2;

	// min
	if (n % 3 == 0) cout << n / 3 << ' ';
	else cout << n / 3 + 1 << ' ';

	// max
	cout << n / 2 << endl;
}
