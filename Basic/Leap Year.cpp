int isLeap( int n ) {
    return !( n % 400 ) || n % 100 && !( n % 4 );
} // 0.01+
