int waiting_time( int n, char c ) {
    return c == 'U'
        ? ( n <= 11 ? 11 : 27 ) - n
        : n + ( n >= 11 ? -11 : 11 );
} // 0.01+
