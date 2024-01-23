void rearrange( int a[], int n ) {
    queue< int > pos, neg;
    for ( int i{}; i < n; ++i )
        ( a[ i ] < 0 ? neg : pos ).push( a[ i ] );
    for ( int i{}; i < n; ) {
        if ( !pos.empty() ) a[ i++ ] = pos.front(), pos.pop();
        if ( !neg.empty() ) a[ i++ ] = neg.front(), neg.pop();
    }
}
