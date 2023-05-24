int getIndexInSortedArray( int a[], int n, int i ) {
    int x{};
    while ( n-- )
        if ( a[ n ] < a[ i ] || a[ n ] == a[ i ] && n < i )
            x++;
    return x;
} // T: 0.22 - 0.25
