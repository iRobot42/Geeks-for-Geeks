int waitingTime( int n, int x ) {
    return x > 9 ? 0 : --n * ( 10 - x );
} // 0.01+
