int MaximumSum( int a[], int n ) {
#   define R a, a + n // range
    int m{ *max_element( R )}, c{ count( R, m )};
    if ( c > 1 || n < 2 ) return c-- * c / 2;
    replace( R, m, 0 );
    return count( R, *max_element( R ));
}
