int countNumbers( int n ) {
    int c{};
    do {
        int t{ n };
        do if ( !( t % 10 ) || t % 10 > 5 ) break;
        while ( t /= 10 );
        if ( !t ) c++;
    } while ( --n );
    return c;
} // T: 0.08+
