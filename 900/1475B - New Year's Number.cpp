if number is not divisible by 2020, subtract 2021 from number till its divisible by 2021

void solve() {
	ll n;
	cin >> n;
	while (n % 2020 != 0) {
		if (n % 2021 == 0) {
			py; return;
		}
		else n -= 2021;
		if (n < 2020) {
			pn; return;
		}
	}
	py;
}
