int EvenOdd( string n1, string n2 ) {
    return !( n1.back() * n2.back() & 1 );
} // T: 0.01+
