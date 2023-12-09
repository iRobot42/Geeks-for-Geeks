int longest( int a[], int n ) {
    int c{ 1 }, h{ *a };
    for ( int i{ 1 }; i < n; ++i )
        if ( a[ i ] >= h )
            h = a[ i ], ++c;
    return c;
}
