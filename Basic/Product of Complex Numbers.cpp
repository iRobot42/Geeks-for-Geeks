vector< int > complexProduct( int a[], int b[] ) {
    int rp{ *a }, ip{ *b };
    for ( int i{ 1 }; i < 5; ++i ) {
        const int RP{ rp };
        rp = rp * a[ i ] - ip * b[ i ];
        ip = ip * a[ i ] + RP * b[ i ];
    }
    return { rp, ip };
} // 0.01+
