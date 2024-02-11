vector< int > findSum( vector< int >& a, vector< int >& b ) {
    vector< int > v;
    int c{}, n{ a.size() }, m{ b.size() };
    while ( n || m || c ) {
        if ( n ) c += a[ --n ];
        if ( m ) c += b[ --m ];
        v.push_back( c % 10 ), c /= 10;
    }
    return reverse( v.begin(), v.end() ), v;
}
