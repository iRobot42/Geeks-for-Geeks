int largestSum( int a[], int n ) {
    int r{}, s{ *a };
    for ( int i{ 1 }; i < n; ++i )
        if ( a[ i ] > a[ i-1 ] ) s += a[ i ];
        else r = max( r, s ), s = a[ i ];
    return max( r, s );
}
