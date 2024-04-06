bool pallan( int n ) {
    string s, r;
    int i{ n }, c{};
    do s += i % 10 + 'a', c += i % 10;
    while ( i /= 10 );
    reverse( s.begin(), s.end() );
    while ( i < c ) r += s[ i++ % s.size() ];
    return r == string( r.crbegin(), r.crend() );
}
