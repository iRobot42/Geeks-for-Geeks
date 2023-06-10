vector< int > uniqueNumbers( int l, int r ) {
    vector< int > v;
    for ( int i{ l }; l <= r; i = ++l ) {
        array< bool, 10 > h{};
        bool f{};
        do if ( h[ i % 10 ]++ ) ++f;
        while ( !f && ( i /= 10 ) );
        if ( !f ) v.push_back( l );
    }
    return v;
} // T: 0.02+
