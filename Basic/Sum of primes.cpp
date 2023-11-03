int primeSum( int n ) {
    int sum{}, digit;
    do switch ( digit = n % 10 ) {
        case 2: case 3: case 5: case 7: sum += digit;
    } while ( n /= 10 );
    return sum;
} // 0.01+
