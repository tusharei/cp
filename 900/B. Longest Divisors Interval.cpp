if odd number then only one interval because beech mein even number aa jaega interval mein (which does not divide odd number) 
to ans hamesha 1 rahega

for even number start from 1 to n and cnt if it divides n then cnt++ else break
Intuition-> agar 1 se chale n tk to hi max range interval mil jaega beech mein se dekhne ki zrurat nhi h. Agar pehle hi divide nhi ho rha to baad mein bhi nhi hoga

void solve() {
	ll n;
	cin >> n;
	if (n & 1) cout << 1 << endl;
	else {
		ll cnt = 0;
		for (int i = 1; i <= n; i++) {
			if (n % i == 0) cnt++;
			else break;
		}
		cout << cnt << endl;
	}
}
