string roundToNearest( string s ) {
    if ( s.back() > '5' ) s.back() = '9';
    else return s.back() = '0', s;
    for ( auto i{ s.rbegin() }; i != s.rend(); ++i )
        if ( *i == '9' ) *i = '0';
        else { ++*i; break; }
    return s.front() == '0' ? '1' + s : s;
}
