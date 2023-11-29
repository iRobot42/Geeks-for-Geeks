vector< int > addOne( int a[], int n ) {
    vector< int > v( n );
    int t{ 1 };
    while ( n-- ) t += a[ n ], v[ n ] = t % 10, t /= 10;
    if ( t ) v.insert( v.begin(), 1 );
    return v;
}
