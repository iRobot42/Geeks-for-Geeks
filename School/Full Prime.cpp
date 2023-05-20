int fullPrime( int n ) {
    for ( int i{ 2 }; i * i <= n; ++i )
        if ( !( n % i ) ) return 0;
    do switch ( n % 10 ) {
        case 2: case 3: case 5: case 7: break;
        default: return 0;
    } while ( n /= 10 );
    return 1;
} // T: 0.01
