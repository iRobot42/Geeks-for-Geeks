using LL = long long;
LL sumBetweenTwoKth( LL a[], LL n, LL k1, LL k2 ) {
    sort( a, a + n );
    return accumulate( a + k1, a + --k2, 0LL );
}
