vector< int > getThreeLargest( vector< int >& a ) {
    const set< int > s( a.cbegin(), a.cend() );
    vector< int > v( s.crbegin(), s.crend() );
    return v.resize( min( int( v.size() ), 3 )), v;
}
