greedly alternatively paint all ? based on previous char;
problem arrises in the first set of ?, for that make two strings s1 and s2 equal to s
now start s1 with 'R' and s2 with 'B'
at last when strings are formed take the string with less imperfections by counting


  void solve() {
	ll n;
	cin >> n;
	string s;
	cin >> s;
	string s1 = s, s2 = s;
	if (s[0] == '?') {
		s1[0] = 'R';
		s2[0] = 'B';
	}
	for (int i = 1; i < n; i++) {
		if (s1[i] == '?') {
			if (s1[i - 1] == 'R') s1[i] = 'B';
			else s1[i] = 'R';
		}
		if (s2[i] == '?') {
			if (s2[i - 1] == 'R') s2[i] = 'B';
			else s2[i] = 'R';
		}
	}
	int cnt1 = 0, cnt2 = 0;
	for (int i = 1; i < n; i++) {
		if (s1[i] == s1[i - 1]) cnt1++;
		if (s2[i] == s2[i - 1]) cnt2++;
	}
	if (cnt1 < cnt2) {
		cout << s1 << endl;
		return;
	}
	cout << s2 << endl;
}
