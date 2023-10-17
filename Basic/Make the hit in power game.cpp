#define V1

#ifdef V1
long long powerGame( long long x, long n ) {
    long long r{};
    for ( long i{ 1 }; i <= n; ++i ) {
        long long f{ powl( x, i )}, l{ f % 10 };
        while ( f > 9 ) f /= 10;
        r = r * 100 + f * 10 + l;
    }
    return r;
} // 0.02+

#elif defined( V2 )
long long powerGame( long long x, long n ) {
    string r;
    for ( long i{ 1 }; i <= n; ++i ) {
        const long long t{ powl( x, i )};
        string s{ to_string( t )};
        r += { s.front(), s.back() };
    }
    return stoll( r );
} // 0.03+

#endif
