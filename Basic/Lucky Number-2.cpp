string getLuckyNum( int n ) {
    int c5, c3, c2, f{ 1 };
    for ( int i{ n / 6 }; f && i >= 0; --i )
        for ( int j{ n / 10 }; f && j >= 0; --j )
            for ( int k{ n / 15 }; f && k >= 0; --k )
                c5 = i * 6, c3 = j * 10, c2 = k * 15,
                f = c5 + c3 + c2 != n;
    return f ? "-1" : string( c5, '5' ) + string( c3, '3' ) + string( c2, '2' );
} // 0.01+
