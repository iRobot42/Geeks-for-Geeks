#define V1

#ifdef V1
int corner_digitSum( int n ) {
    const int i{ n % 10 };
    do n /= 10;
    while ( n > 9 );
    return i + n;
} // 0.01+

#elif defined( V2 )
int corner_digitSum( int n ) {
    const string s{ to_string( n )};
    return n > 9 ? s.front() + s.back() - 96 : n;
} // 0.01+

#endif
