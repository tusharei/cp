count all the possible "25", "50", "75", "00" in the number and take the min steps of removing extra numbers
eg. 5 4 3 '2' 9 '5' 8 8
ind 0 1 2  3  4  5  6 7
  So steps = remove 8, 8 (after 5) and 9 (b/w 2 and 5) = 3 steps 
Now take min steps by finding all such pairs divisible by 25

void solve() {
	string s;
	cin >> s;
	ll n = s.size(), ans = INT_MAX;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			int num = (s[i] - '0') * 10 + (s[j] - '0');
			if (num % 25 == 0) {
				ans = min(ans, (j - i - 1) + (n - 1 - j));
			}
		}
	}
	cout << ans << endl;
}
