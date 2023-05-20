string is_AutomorphicNumber( int n ) {
    int d{ 1 };
    do d *= 10; while ( d < n );
    return ( n * n % d == n ? ""s : "Not " ) + "Automorphic";
} // T: 0.01
