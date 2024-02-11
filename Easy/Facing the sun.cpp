int countBuildings( int h[], int n ) {
    int c{ 1 };
    for ( int i{ 1 }; i < n; ++i )
        if ( h[ i ] > *h ) *h = h[ i ], ++c;
    return c;
}
