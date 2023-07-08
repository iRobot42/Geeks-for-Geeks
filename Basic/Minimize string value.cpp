int minValue( string s, int k ) {
    if ( k >= s.size() ) return 0;
    array< int, 26 > a{};
    for ( const char c : s ) ++a[ c-97 ];
    while ( k-- ) --( *max_element( a.begin(), a.end() ));
    return accumulate( a.cbegin(), a.cend(), 0,
        []( int acc, int i ){ return acc += i * i; });
} // 0.01+
