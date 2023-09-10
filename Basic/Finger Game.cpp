int fingerCount( int n ) {
    return !( n %= 8 ) ? 2 : n < 5 ? n : 10 - n;
} // 0.01+
