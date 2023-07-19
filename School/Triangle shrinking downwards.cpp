string triDownwards( string s ){
    const size_t S{ s.size() };
    for ( size_t i{ 1 }; i < S; ++i )
        s += string( i, '.' ) + s.substr( i, S-i );
    return s;
} // 0.01+
