long long differentWaysToSpell( string n ) {
    long long r{ 1 }, c{};
    for ( size_t i{ 1 }; i < n.size(); ++i )
        if ( n[ i ] == n[ i-1 ] ) ++c;
        else r *= pow( 2, c ), c = 0;
    return r * pow( 2, c );
} // 0.01+
