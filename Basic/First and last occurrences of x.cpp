vector< int > find( int a[], int n, int x ) {
    return !binary_search( a, a + n, x ) ?
        vector< int >{ -1, -1 } :
        vector< int >{ lower_bound( a, a + n, x ) - a,
                       upper_bound( a, a + n, x ) - ++a };
} // T: 0.27+
