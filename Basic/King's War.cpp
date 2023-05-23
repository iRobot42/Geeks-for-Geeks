long long SoldierRequired( long long a[], long long n ) {
    const long long w{ *min_element( a, a + n ) },
                    s{ *max_element( a, a + n ) };
    return count_if( a, a + n,
        [ & ]( int i ){ return i != w && i != s; } );
} // T: 0.48 - 0.56
