based on the fact that if first and last chars are same, count of 'ab' and 'ba' will be equal.
void solve() {
	string s;
	cin >> s;
	int n = s.size();
	if (n == 1 or (s[0] == s[n - 1])) {
		cout << s << endl;
		return;
	}
	cout << s.substr(0, n - 1) << s[0] << endl;
}
