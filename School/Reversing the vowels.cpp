string modify( string s ) {
    auto l{ s.begin() }, r{ s.end() - 1 };
    while ( l < r )
        if ( "aeiou"s.find( *l ) == string::npos ) l++;
        else if ( "aeiou"s.find( *r ) == string::npos ) r--;
        else swap( *l++, *r-- );
    return s;
} // T: 0.11 - 0.12
