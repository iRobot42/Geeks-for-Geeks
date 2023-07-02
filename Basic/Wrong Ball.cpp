int countWrongPlacedBalls( string s ) {
    int c{};
    for ( size_t i{}; i < s.size(); ++i )
        if ( s[ i ] != ( i & 1 ? 'B' : 'R' )) ++c;
    return c;
} // T: 0.03+
