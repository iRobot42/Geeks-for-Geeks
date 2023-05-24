bool possible( long long a[], long long n ) {
    return accumulate( a, a + n, 0ll ) == n++ * n / 2;
} // T: 0.42 - 0.46
