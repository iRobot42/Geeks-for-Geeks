int subsequenceSum( string s ) {
    int i{};
    for ( const char c : s ) i += c-'0';
    return i << s.size()-1;
} // T: 0.01+
