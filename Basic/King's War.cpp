long long SoldierRequired( long long a[], long long n ) {
    const auto m{ minmax_element( a, a + n ) };
    return count_if( a, a + n,
        [ & ]( int i ){ return i != *m.first && i != *m.second; } );
} // T: 0.48 - 0.56
