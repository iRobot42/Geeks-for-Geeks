int minX( int a, int b, int c, long k ) {
    const auto d{ double( b ) * b - 4 * a * ( c - k )};
    return d < 0 ? 0 : ceil( a ? ( -b + sqrt( d )) / ( 2 * a )
                               : ( double( k ) - c ) / b );
} // 0.01+
