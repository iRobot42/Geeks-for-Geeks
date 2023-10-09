string minimumLuckyNumber( int n ) {
    string s;
    while ( n % 7 ) s += '4', n -= 4;
    while ( n > 0 ) s += '7', n -= 7;
    return n ? "-1" : s;
} // 0.04+
