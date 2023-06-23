long long equalPairs( string s ) {
    vector< int > h( 26 + 'a' );
    for ( const char c : s ) ++h[ c ];
    long long r{};
    for ( const int i : h ) r += i * i;
    return r;
} // T: 0.01+
