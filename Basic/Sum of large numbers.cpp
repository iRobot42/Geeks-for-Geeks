string add( string s1, string s2 ) {
    if ( s1.size() < s2.size() ) swap( s1, s2 );
    s2 = string( s1.size() - s2.size(), '0' ) + s2;
    bool carry{};
    for ( int i( s1.size()-1 ); i >= 0; --i ) {
        const int sum{ s1[ i ] + s2[ i ] - 96 + carry };
        s1[ i ] = sum % 10 + '0';
        carry = sum / 10;
    }
    return ( carry ? "1" : "" ) + s1;
} // 0.03+
