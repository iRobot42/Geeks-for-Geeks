#define V1

#ifdef V1
int remove_duplicate( int a[], int n ) {
    return unique( a, a + n ) - a;
}

#elif defined( V2 )
int remove_duplicate( int a[], int n ) {
    int r{};
    for ( int i{ 1 }; i < n; ++i )
        if ( a[ r ] != a[ i ] )
            a[ ++r ] = a[ i ];
    return ++r;
}

#endif
