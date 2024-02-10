forget x and
count the min possible sum with k elements (thats first k elements) and max possible sum (thats last k elements)

Now x can be made if it lies between this minSum and maxSum (Remember)

void solve() {
	ll n, k, x;
	cin >> n >> k >> x;
	ll minSumWithKelements = k * (k + 1) / 2;
	ll totalSum = n * (n + 1) / 2;
	ll maxSumWithKelements = totalSum - (n - k) * (n - k + 1) / 2;
	if (x >= minSumWithKelements && x <= maxSumWithKelements)
		py;
	else pn;
}
