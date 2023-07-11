long long countCarry( long long a, long long b ) {
    int n{}; bool c{};
    do if ( c = a % 10 + b % 10 + c > 9 ) ++n;
    while (( a /= 10 ) && ( b /= 10 ));
    return n;
} // 0.02+
