long long findCountUpto( long long d ) {
    return pow( 10, d ) + ( 1 - pow( 9, ++d )) / 8;
} // 0.01+
