void Learning( int a[], int n, float& pos, float& neg, float& zero ) {
    for ( int i{}; i < n; ++i )
        a[ i ] > 0 ? pos++ : a[ i ] < 0 ? neg++ : zero++;
    pos = n / pos, neg = n / neg, zero = n / zero;
} // T: 0.17 - 0.19
