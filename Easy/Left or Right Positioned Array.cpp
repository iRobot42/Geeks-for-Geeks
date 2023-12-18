bool leftRight( int a[], int n ) {
    bool b[ n ]{};
    for ( int i{}; i < n; ++i )
        if ( a[ i ] >= n ) return false;
        else b[ b[ a[ i ]] ? n-1 - a[ i ] : a[ i ]] = true;
    return find( b, b + n, false ) == b + n;
}
