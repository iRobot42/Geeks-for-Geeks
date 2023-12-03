int isPolygonPossible( int a[], int n ) {
    for ( int e{ n / 3 }; e; --e )
        if (!( n % e ))
            for ( int r{}; r < e; ++r ) {
                bool f{ true };
                for ( int i{ r }; i < n && f; i += e )
                    if ( !a[ i ] ) f = false;
                if ( f ) return 1;
            }
    return -1;
}
