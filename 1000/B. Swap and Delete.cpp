count number of 1's and 0's.
  Now as we place the opposite chars in the new string decrement its cnt, say we place 0 so do cnt0--;
  Do this until we are out of counts. The remaining string is your ans.

void solve() {
	string s;
	cin >> s;
	ll cnt0 = 0, cnt1 = 0, n = s.size();
	for (auto i : s) {
		if (i == '0') cnt0++;
		else cnt1++;
	}
	for (int i = 0; i < n; i++) {
		if (s[i] == '1' && cnt0) cnt0--;
		else if (s[i] == '0' && cnt1) cnt1--;
		else {
			ll ans = n - i;
			cout << ans << endl;
			return;
		}
	}
	cout << 0 << endl;
}
 
