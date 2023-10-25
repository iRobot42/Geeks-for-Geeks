int isConnected( int a, int b ) {
    const int d{ abs( a - b ) };
    return min( a, b ) & 1 ? d <= 2 : d == 2;
} // 0.01+
