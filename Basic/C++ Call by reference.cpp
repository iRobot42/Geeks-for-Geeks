#define V2

#ifdef V1
void reverse_dig( int& a, int& b ) {
    int r{ a % 10 };
    while ( a /= 10 ) r = r * 10 + a % 10;
    a = r, r = b % 10;
    while ( b /= 10 ) r = r * 10 + b % 10;
    b = r;
}
void swap( int& a, int& b ) {
    a += b, b = a - b, a -= b;
}

#elif defined( V2 )
void reverse_dig( int& a, int& b ) {
    const auto rev{ []( int& n ) {
        int r{ n % 10 };
        while ( n /= 10 ) r = r * 10 + n % 10;
        n = r;
    }};
    rev( a ), rev( b );
}
void swap( int& a, int& b ) {
    const int t{ a };
    a = b, b = t;
} // or just std::swap( a, b );

#endif
