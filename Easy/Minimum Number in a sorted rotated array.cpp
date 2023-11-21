int minNumber( int a[], int l, int r ) {
    int x{ *a };
    while ( l <= r ) {
        int m{ l + r >> 1 };
        if ( a[ m ] < a[ l ] )
             x = min( x, a[ m ] ), r = --m;
        else x = min( x, a[ l ] ), l = ++m;
    }
    return x;
}
