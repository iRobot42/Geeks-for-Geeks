int compute( int a[], int n ) {
    int r{ 1 }, c{ 1 };
    for ( int i{ 1 }; i < n; ++i )
        if ( a[ i ] >= a[ i-1 ] ) ++c;
        else r = max( r, c ), c = 1;
    return max( r, c );
}
