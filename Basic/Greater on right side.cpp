void nextGreatest( int a[], int n ) {
    int m{ -1 };
    while ( n-- ) {
        int t{ a[ n ] };
        a[ n ] = m, m = max( m, t );
    }
} // T: 0.27 - 0.31
