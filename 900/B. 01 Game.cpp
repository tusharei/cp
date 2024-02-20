Total adj 01 present = min(cnt0, cnt1)
now if min(cnt0, cnt1) is odd Alice wins else loses

void solve() {
	string s;
	cin >> s;
	ll cnt0(0), cnt1(0);
	fl(i, s.size()) {
		if (s[i] == '1') cnt1++;
		if (s[i] == '0') cnt0++;
	}
	if (min(cnt0, cnt1) & 1) cout << "DA\n";
	else cout << "NET\n";
}
