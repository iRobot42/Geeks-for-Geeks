int binarySearch( int a[], int l, int r ) {
    while ( l <= r ) {
        int m{ ( l + r ) / 2 };
        if ( a[ m ] == m ) return m;
        a[ m ] < m ? l = ++m : r = --m;
    }
    return -1;
} // T: 0.01
