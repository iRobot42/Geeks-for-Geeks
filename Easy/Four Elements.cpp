bool find4Numbers( int a[], int n, int x ) {
    sort( a, a + n );
    for ( int i{}; i < n; ++i )
        for ( int j{ i+1 }; j < n; ++j ) {
            int s{ x - a[ i ] - a[ j ] }, l{ j+1 }, r{ n-1 };
            while ( l < r )
                if ( a[ l ] + a[ r ] == s ) return true;
                else if ( a[ l ] + a[ r ] > s ) --r;
                else ++l;
        }
    return false;
}
