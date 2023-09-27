vector< int > pronicNumbers( int n ) {
    vector< int > v;
    for ( int i{ 1 }, p{}; p <= n; ++i )
        v.push_back( p ), p = i * ( i+1 );
    return v;
} // 0.01+
