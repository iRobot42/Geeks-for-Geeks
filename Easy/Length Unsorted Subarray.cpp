vector< int > printUnsorted( int a[], int n ) {
    int s{}, e{}, m{}, i{ -1 };
    while ( ++i < n )
        if ( a[ i ] < ( m = max( m, a[ i ] ))) e = i;
    while ( i-- )
        if ( a[ i ] > ( m = min( m, a[ i ] ))) s = i;
    return { s, e };
}
