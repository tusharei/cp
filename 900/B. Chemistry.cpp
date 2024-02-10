count odd number frequencies , say cnt, so if(k>=cnt-1) (since odd frequency can be atmost 1, then return YES
else YES

in start also check base case if (k>=n) then return no 


  void solve() {
	ll n, k;
	cin >> n >> k;

	if (k >= n) {
		pn; return;
	}

	string s; cin >> s;
	map<char, int> mp;
	for (auto ch : s) {
		mp[ch]++;
	}
	int cnt = 0;
	for (auto i : mp) {
		if (i.second % 2 == 1)
			cnt++;
	}
	if (k >= cnt - 1)
		py;
	else pn;

}
