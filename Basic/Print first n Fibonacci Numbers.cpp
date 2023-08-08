#define V2

#ifdef V1 // loop
vector< long long > printFibb( int n ) {
    vector< long long > fib( n, 1LL );
    for ( size_t i{ 2 }; i < n; ++i )
        fib[ i ] = fib[ i-1 ] + fib[ i-2 ];
    return fib;
} // 0.02+

#elif defined( V2 ) // adjacent_difference
vector< long long > printFibb( int n ) {
    vector< long long > fib( n, 1LL );
    adjacent_difference( fib.begin(), prev( fib.end() ),
                         next( fib.begin() ), plus<>() );
    return fib;
} // 0.02+

#endif
