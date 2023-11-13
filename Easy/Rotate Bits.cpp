vector< int > rotate( int n, int d ) {
    return d %= 16, vector< int >{
        ( n << d | n >> 16-d ) & 0xFFFF,
        ( n >> d | n << 16-d ) & 0xFFFF };
}
