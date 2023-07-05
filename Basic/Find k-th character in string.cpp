char kthCharacter( int m, int n, int k ) {
    string s{ bitset< 32 >( m ).to_string() };
    const size_t p{ s.find( '1' )};
    s = p == string::npos ? "0" : s.substr( p );
    while ( n-- )
        for ( size_t i{}; i < s.size(); i += 2 )
            s.insert( i + 1, s[ i ] == 48 ? "1" : "0" );
    return s[ --k ];
} // T: 0.01+
