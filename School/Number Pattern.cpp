vector< string > numberPattern( int n ) {
#define ADD v[ i ] += to_string( j + 1 )
    vector< string > v( n );
    for ( int i{}; i < n; ++i ) {
        for ( int j{   0   }; j <= i; ++j ) ADD;
        for ( int j{ i - 1 }; j >= 0; --j ) ADD;
    }
    return v;
} // T: 0.17 - 0.19
#undef ADD
