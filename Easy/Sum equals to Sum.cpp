int findPairs( long long a[], long long n ) {
    unordered_set< long long > s;
    for ( long long i{}; i < n; ++i )
        for ( auto j{ i+1 }; j < n; ++j ) {
            const auto sum{ a[ i ] + a[ j ] };
            if ( s.find( sum ) != s.cend() ) return 1;
            s.insert( sum );
        }
    return 0;
}
