Given permu => 3 10 5 2 9 6 7 8 1 4
Req Permu   => 1  2 3 4 5 6 7 8 9 10
---------------------------------------
Abs Diff    =>-2--8-2-2-4-0-0-0-8-6----

abs diff shows how much distance ele has to go to get to its respective position.
for maximized k take GCD of all ele of abs diff 

Intuition => if we choose 8 then we cant move 2, similarly for 4 and 6. So we need to choose a number that can move each ele which is infact the highest common factor ie gcd.

void solve() {
	ll n, ans = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		if (abs(a - i) != 0) {
			ans = gcd(ans, abs(a - i));
		}
	}
	cout << ans << endl;
}
