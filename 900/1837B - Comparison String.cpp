just want to calculate the longest substring with same chars
void solve() {
	ll n;
	cin >> n;
	string s;
	cin >> s;
	ll ans = 1, cur = 1;
	for (int i = 1; i < n; i++)
	{
		if (s[i] != s[i - 1]) cur = 1;
		else cur++;
		ans = max(ans, cur);
	}
	cout << ans + 1 << endl;
}
