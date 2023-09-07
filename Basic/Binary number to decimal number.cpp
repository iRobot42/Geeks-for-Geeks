#define V1

#ifdef V1
int binary_to_decimal( string binary ) {
    return stoi( binary, nullptr, 2 );
} // 0.02+

#elif defined( V2 )
int binary_to_decimal( string binary ) {
    int decimal{}, p{ binary.size()-1 };
    for ( const char bit : binary )
        decimal += bit == '1' ? 1 << p : 0, --p;
    return decimal;
} // 0.03+

#endif
