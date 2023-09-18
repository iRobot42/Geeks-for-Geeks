vector< int > cyclicPermutations( int n ) {
    string s{ to_string( n )};
    int i{ stoi( s )}, size{ s.size()};
    vector< int > v{ i };
    v.reserve( size );
    while ( --size ) {
        rotate( s.rbegin(), ++s.rbegin(), s.rend() );
        if (( i = stoi( s )) == n ) break;
        v.push_back( i );
    }
    return v;
} // 0.01+
