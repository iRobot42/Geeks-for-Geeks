int isTidy( int n ) {
    int prev{ n % 10 };
    while ( n /= 10 ) {
        const int curr{ n % 10 };
        if ( curr > prev ) return 0;
        prev = curr;
    }
    return 1;
} // 0.01+
