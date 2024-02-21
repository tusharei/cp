Check the 4 condn
1. if b-a == c-b
2. m * a = 2*b - c 
3. m * b = (a+c)/2
4. m * c = 2*b - a

Note => eqn 2,3,4 are derived from 1 

void solve() {
	ll a, b, c;
	cin >> a >> b >> c;
	if ((b - a) == (c - b)) py;
	else if ((2 * b - c) > 0 and (2 * b - c) % a == 0) py; // check a
	else if ((a + c) % (2 * b)	== 0) py; // check b
	else if ((2 * b - a) > 0 and (2 * b - a) % c == 0) py; // check c
	else pn;
}
