What is MEX? 
The MEX (minimum excluded) of an array is the smallest non-negative integer that does not belong to the array. For instance:
•	The MEX of [2,2,1] is 00, because 00 does not belong to the array.
•	The MEX of [3,1,0,1] is 22, because 00 and 11 belong to the array, but 22 does not.
•	The MEX of [0,3,1,2] is 44 because 00, 11, 22 and 33 belong to the array, but 44 does not.
It's worth mentioning that the MEX of an array of length n is always between 00 and n inclusive.


To convert the whole array into 0 it will take at most 2 operations => take mex of whole array 2 times
Otherwise count the subarrays without zeros 
Take min of above two statements

void solve() {
	ll n;
	cin >> n;
	vi a(n + 1);
	for (int i = 1; i <= n; i++) cin >> a[i];
	ll ans = 0;
	for (int i = 2; i <= n; i++) {
		if (a[i] != 0 && a[i - 1] == 0) ans++;
	}
	if (a[1] != 0) ans++;
	cout << min(ans, 2ll) << endl;
}
