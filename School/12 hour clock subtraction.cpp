int subClock( int n1, int n2 ) {
    return ( ( n1 - n2 ) % 12 + 12 ) % 12;
} // T: 0.02
