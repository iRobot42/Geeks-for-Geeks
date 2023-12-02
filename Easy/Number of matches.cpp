void getAnswer( int a[], int r[], int n ) {
    vector< int > v( n );
    std::iota( v.begin(), v.end(), 0 );
    while ( v.size() > 1 ) {
        vector< int > t;
        const size_t s{ v.size() }, l{ s - s % 2 };
        for ( size_t i{}; i < l; i += 2 )
            ++r[ v[ i ]], ++r[ v[ i+1 ]],
            t.push_back( v[ i + ( a[ v[ i ]] < a[ v[ i+1 ]])]);
        if ( s & 1 ) t.push_back( v.back() );
        v = move( t );
    }
}
