vector< int > distributeGift( vector< int > a[], int n ) {
    vector< int > given( n + 1 ), result( n );
    for ( int i{}; i < n; ++i )
        for ( const int gift : a[ i ] )
            if ( !given[ gift ] ) {
                result[ i ] = gift;
                given[ gift ] = 1;
                break;
            }
    return result;
}
