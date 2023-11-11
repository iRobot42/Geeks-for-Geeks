int minimumTime( int n, int c, vector< int >& p, vector< int >& t ) {
    int x{ INT_MAX };
    while ( n-- ) x = min( x, abs( c - p[ n ] ) * t[ n ] );
    return x;
}
