long long minNumber( long long a[], long long n ) {
    auto s{ accumulate( a, a + n, 0ll ) }; n = s;
    for ( auto i{ 2 }; i * i <= s; ++i )
        if ( !( s % i ) ) s++, i = 1;
    return s - n;
} // T: 0.01+
