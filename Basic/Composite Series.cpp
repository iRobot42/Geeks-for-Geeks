vector< int > compositeNumbers( int n ) {
    vector< int > v;
    for ( int i{ 4 }; i <= n; ++i )
        for ( int f{ 2 }, r{ sqrt( i )}; f <= r; ++f )
            if (!( i % f )) { v.push_back( i ); break; }
    return v;
} // 0.05+
