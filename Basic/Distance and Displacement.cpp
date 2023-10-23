int distance( int n, int a[], char d[] ) {
    int r{}, x{}, y{};
    while ( n-- ) {
        r += a[ n ];
        switch ( d[ n ] ) {
            case 'E': x += a[ n ]; break;
            case 'W': x -= a[ n ]; break;
            case 'N': y += a[ n ]; break;
            case 'S': y -= a[ n ]; break;
        }
    }
    return r + ceil( hypot( x, y ));
} // 0.03+
