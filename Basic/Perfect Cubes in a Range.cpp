vector< int > properCubes( int a, int b ) {
    int n{ cbrt( a )}, cube{ n * n * n };
    if ( cube < a ) cube = pow( ++n, 3 );
    vector< int > cubes;
    while ( cube <= b )
        cubes.push_back( cube ),
        cube = pow( ++n, 3 );
    if ( cubes.empty() ) return { -1 };
    return cubes;
} // 0.01+
