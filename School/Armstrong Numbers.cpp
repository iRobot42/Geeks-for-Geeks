string armstrongNumber( int n ) {
    int s{}, t{ n };
    do s += pow( t % 10, 3 ); while ( t /= 10 );
    return s == n ? "Yes" : "No";
} // T: 0.01
