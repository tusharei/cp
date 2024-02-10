print even number first then odd -> since gcd of two even number is atleast 2 which means > 1.
then find gcd of every pair in sorted (even then odd) array ans return;
imp ->
Sort by even then odd (using lambda function) =>
sort(all(a), [](int x, int y) {
		return x % 2 < y % 2;
});
