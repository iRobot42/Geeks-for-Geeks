int countSubstringWithEqualEnds( string s ) {
    int h[ 26 ]{}, x{};
    for ( const char c : s ) ++h[ c - 'a' ];
    for ( int i{}; i < 26; ++i )
        x += h[ i ] * ++h[ i ] / 2;
    return x;
} // T: 0.01+
