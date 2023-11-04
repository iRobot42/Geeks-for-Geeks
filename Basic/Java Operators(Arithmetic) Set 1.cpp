vector< double > FindRoots( int a, int b, int c ) {
    const double d{ b*b - 4*a*c }, r{ sqrt( d )};
    if ( d < 0 ) return { -1 };
    vector< double > v{( -b+r )/( 2*a ), ( -b-r )/( 2*a )};
    return sort( v.begin(), v.end() ), v;
} // 0.01+
