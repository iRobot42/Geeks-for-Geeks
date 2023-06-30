string isGoodString( string s ) {
    for ( size_t i{ 1 }, d{}; i < s.size(); ++i )
        if (( d = abs( s[ i ] - s[ i-1 ] )) != 1 && d != 25 )
            return "NO";
    return "YES";
} // T: 0.03+
