int CountPairs( int a[], int n ) {
    int e2{}, g2{};
    for ( int i{}; i < n; ++i )
        if ( a[ i ] == 2 ) e2++;
        else if ( a[ i ] > 2 ) g2++;
    return e2 * g2 + g2-- * g2 / 2;
} // T: 0.25 - 0.27
