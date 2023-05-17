vector< int > findElements( int a[], int n ) {
    sort( a, a + n-- );
    return { a, a + --n };
} // T: 0.48 - 0.53
