int remainderWith7( string n ) {
    int i{};
    for ( char c : n )
        i = ( 3 * i + ++c ) % 7;
    return i;
} // T: 0.01+
