check for all possible combinations of king in which knight can be placed. Now on those combinations check if queen can be reached if yes push in set. At last return set size.
set coz it can be possible kight move a,b, if a==b then we'll consider multiple times (which we dont want).

set<pair<int, int>> st;
void check(int a, int b, int x , int y, int qx, int qy) {
	int diffx = abs(x - qx);
	int diffy = abs(y - qy);
	if ((diffx == a and diffy == b) || (diffx == b and diffy == a)) {
		st.insert({x, y});
	}
}
void solve() {
	int a, b, kx, ky, qx, qy;
	cin >> a >> b >> kx >> ky >> qx >> qy;
	st.clear();
	check(a, b, kx + a, ky + b, qx, qy);
	check(a, b, kx - a, ky + b, qx, qy);
	check(a, b, kx + a, ky - b, qx, qy);
	check(a, b, kx - a, ky - b, qx, qy);
	check(a, b, kx + b, ky + a, qx, qy);
	check(a, b, kx - b, ky + a, qx, qy);
	check(a, b, kx + b, ky - a, qx, qy);
	check(a, b, kx - b, ky - a, qx, qy);

	cout << st.size() << endl;
}
