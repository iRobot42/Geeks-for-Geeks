int evenlyDivides( int n ) {
    int c{}, t{ n };
    do if ( t % 10 && !( n % ( t % 10 ) ) ) c++;
    while ( t /= 10 );
    return c;
} // T: 0.01
