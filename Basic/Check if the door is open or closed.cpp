int* checkDoorStatus( int n ) {
    int* doors{ new int[ n ] };
    for ( int i{ 1 }; i <= n; ++i ) {
        const int j{ i * i };
        if ( j <= n ) doors[ j-1 ] = 1;
    }
    return doors;
} // 0.03+
