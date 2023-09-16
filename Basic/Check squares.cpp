int checkSquares( int n ) {
    for ( int a{}, r{ sqrt( n )}; a <= r; ++a )
        for ( int b{ a }, a2{ a * a }; b <= r; ++b )
            if ( a2 + b * b == n ) return 1;
    return 0;
} // 0.03+
