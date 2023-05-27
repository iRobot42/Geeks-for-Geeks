long long totalFine( int n, int date, int car[], int fine[] ) {
    long long s{};
    if ( date & 1 ) for ( int i{}; i < n; ++i )
        s += 1ll * fine[ i ] * !( car[ i ] & 1 );
    else for ( int i{}; i < n; ++i )
        s += 1ll * fine[ i ] * ( car[ i ] & 1 );
    return s;
} // T: 0.68+
