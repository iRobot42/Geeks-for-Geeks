int CountNo( int n ) {
    int c{};
    while ( n > 9 ) {
        int t{ n-- };
        do if (!( t % 10 )) {
            ++c;
            break;
        } while ( t /= 10 );
    }
    return c;
} // 0.09+
