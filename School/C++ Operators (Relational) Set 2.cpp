string compareNum( int a, int b ) {
    return to_string( a ) + " is " + ( a == b ? "equals to " :
        a < b ? "less than " : "greater than " ) + to_string( b );
} // T: 0.01
