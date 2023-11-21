int maxStep( int a[], int n ) {
    int S{}, s{};
    while ( --n )
        if ( a[ n ] > a[ n-1 ] ) ++s;
        else S = max( S, s ), s = 0;
    return max( S, s );
}
