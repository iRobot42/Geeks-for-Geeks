int oddAndEven( string s ) {
    int d{};
    for ( size_t i{ 0 }; i < s.size(); i += 2 ) d += s[ i ]-'0';
    for ( size_t i{ 1 }; i < s.size(); i += 2 ) d -= s[ i ]-'0';
    return !d;
} // 0.31+
