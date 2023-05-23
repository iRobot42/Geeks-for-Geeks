int findIndex( int a[], int x, int y, int n ) {
    int r{ -1 }, cx{}, cy{};
    for ( int i{}; i < n; ++i ) {
        if ( a[ i ] == x ) cx++;
        else if ( a[ i ] == y ) cy++;
        if ( cx && cx == cy ) r = i;
    }
    return r;
} // T: 0.22 - 0.24
