pair< int, int > getFloorAndCeil( int a[], int n, int x ) {
    int f{ -1 }, c( INT_MAX );
    while ( n-- )
        if ( a[ n ] == x ) return { x, x };
        else if ( a[ n ] < x && a[ n ] > f ) f = a[ n ];
        else if ( a[ n ] > x && a[ n ] < c ) c = a[ n ];
    return { f, c == INT_MAX ? -1 : c };
} // T: 0.3+
