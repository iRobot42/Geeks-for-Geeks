int firstRepeated( int a[], int n ) {
    int m[ 1'000'001 ]{};
    for ( int i{}; i < n; ++i ) ++m[ a[ i ]];
    for ( int i{}; i < n; ++i )
        if ( m[ a[ i ]] > 1 ) return ++i;
    return -1;
}
