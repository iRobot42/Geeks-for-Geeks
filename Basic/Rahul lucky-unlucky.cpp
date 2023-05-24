int flippedIndexes( char a[], int n, int getAnswer[] ) {
    int c{};
    for ( int i{ 1 }; i < n; ++i )
        if ( a[ i - 1 ] == 'T' )
            getAnswer[ c++ ] = i,
            a[ i ] = a[ i ] == 'T' ? 'H' : 'T';
    if ( a[ n - 1 ] == 'T' )
        getAnswer[ c++ ] = n;
    return c;
} // T: 0.34 - 0.37
