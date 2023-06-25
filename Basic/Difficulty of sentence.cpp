int calcDiff( string s ) {
    s.pop_back();
    int d{}, v{}, c{}, t{}, f{};
    const string S{ "AEIOUaeiou" };
    for ( const auto i : s )
        if ( i == ' ' )
            d += f || c > v ? 5 : 3,
            f = t = v = c = 0;
        else if ( S.find( i ) != -1 ) ++v, t = 0;
        else ++c, f = ++t > 3;
    return d += f || c > v ? 5 : 3;
} // T: 0.01+
