long long maxProductSubarrayOfSizeK( int a[], int n, int k ) {
    sort( a, a + n );
    long long p{ 1 };
    int l{}, r{ n-1 };
    if ( k & 1 )
        if ( !a[ r ] ) return 0LL;
        else if ( a[ r ] > 0 ) --k, p *= a[ r-- ];
        else return accumulate( a + n - k, a + n, 1LL, multiplies<>() );
    while ( k ) { k -= 2;
        const int lp{ a[ l ] * a[ l+1 ] };
        const int rp{ a[ r ] * a[ r-1 ] };
        if ( lp > rp ) p *= lp, l += 2;
        else           p *= rp, r -= 2;
    }
    return p;
}
