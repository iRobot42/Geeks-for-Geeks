vector< int > findXandY( int a, int b, int n ) {
    for ( int x{}, y, lim{ n / a }; x <= lim; ++x )
        if ( a * x + b * ( y = ( n - a * x ) / b ) == n )
            return { x, y };
    return { -1, -1 };
} // 0.01+
