store the chars in hash of second string
now iterate in the first string and find the chars of hash if present and store them in another ans string. 
finally reverse the ans string and check if ans == s2
  if yes py
else pn


void solve() {
	int hash[26] = {0};
	string s, t;
	cin >> s >> t;
	for (auto it : t) {
		hash[it - 'A']++;
	}
	string temp;
	for (int i = s.size() - 1; i >= 0; i--) {
		if (hash[s[i] - 'A']) {
			temp += s[i];
			hash[s[i] - 'A']--;
		}
	}
	reverse(temp.begin(), temp.end());
	if (temp == t) py;
	else pn;
 
}
