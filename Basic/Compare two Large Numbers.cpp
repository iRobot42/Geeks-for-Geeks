int check( string a, string b ) {
    a.size() < b.size()
        ? a.insert( 0, b.size() - a.size(), '0' )
        : b.insert( 0, a.size() - b.size(), '0' );
    for ( size_t i{}; i < a.size(); ++i )
        if      ( a[ i ] < b[ i ] ) return 1;
        else if ( a[ i ] > b[ i ] ) return 2;
    return 3;
} // T: 0.01+
