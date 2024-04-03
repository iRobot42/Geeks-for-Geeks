vector< int > deleteElement( int a[], int n, int k ) {
    stack< int > s;
    for ( int i{}; i < n; s.push( a[ i++ ] ))
        while ( k && !s.empty() && s.top() < a[ i ] )
            --k, s.pop();
    size_t i{ s.size() };
    vector< int > v( i );
    while ( i-- ) v[ i ] = s.top(), s.pop();
    return v;
}
