Make a generalized case for even number of elements and odd number of elements
for even ans is 
2
1 n
1 n
for odd ans is 
4
1 n
2 n
1 2
1 2

void solve() {
	ll n;
	cin >> n;
	fl(i, n) {
		int x;
		cin >> x;
	}
	if (n % 2 == 0) {
		cout << "2" << endl;
		cout << "1 " << n << endl;
		cout << "1 " << n << endl;
	}
	else {
		cout << "4" << endl;
		cout << "1 " << n << endl;
		cout << "2 " << n << endl;
		cout << "1 2" << endl;
		cout << "1 2" << endl;
	}
}
