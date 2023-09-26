int evenFactors( int number ) {
    if ( number & 1 ) return 0;
    int sum{}, root{ sqrt( number )};
    for ( int factor{ 1 }; factor <= root; ++factor )
        if (!( number % factor )) {
            if (!( factor & 1 ))
                sum += factor;
            const int factor2{ number / factor };
            if (!( factor2 & 1 ) && factor2 > root )
                sum += factor2;
        }
    return sum;
} // 0.01+
