#define V1

#ifdef V1
int isReversible( string s, int n ) {
    for ( size_t l{}, r{ n-1 }; l < r; ++l, --r )
        if ( s[ l ] != s[ r ] ) return 0;
    return 1;
} // 0.05+

#elif defined( V2 )
int isReversible( string s, int n ) {
    return s == string( s.crbegin(), s.crend() );
} // 0.09+

#endif
