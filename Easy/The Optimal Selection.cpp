long long selection( int a[], int n ) {
    sort( a, a + n );
    long long sum{};
    while ( --n ) sum += a[ n ] * n;
    return sum;
}
