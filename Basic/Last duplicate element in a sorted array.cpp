vector< int > dupLastIndex( int a[], int n ) {
    while ( --n )
        if ( a[ n ] == a[ n - 1 ] )
            return { n, a[ n ] };
    return { -1 };
} // T: 0.41 - 0.44
